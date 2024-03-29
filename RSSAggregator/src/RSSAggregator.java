import components.simplereader.SimpleReader;
import components.simplereader.SimpleReader1L;
import components.simplewriter.SimpleWriter;
import components.simplewriter.SimpleWriter1L;
import components.xmltree.XMLTree;
import components.xmltree.XMLTree1;

/**
 * Program to convert an XML RSS (version 2.0) feed from a given URL into the
 * corresponding HTML output file.
 *
 * @author Robbie Espinosa
 *
 */
public final class RSSAggregator {

    /**
     * Private constructor so this utility class cannot be instantiated.
     */
    private RSSAggregator() {
    }

    /**
     * Outputs the "opening" tags in the generated HTML file. These are the
     * expected elements generated by this method:
     *
     * <html> <head> <title>the channel tag title as the page title</title>
     * </head> <body>
     * <h1>the page title inside a link to the <channel> link</h1>
     * <p>
     * the channel description
     * </p>
     * <table border="1">
     * <tr>
     * <th>Date</th>
     * <th>Source</th>
     * <th>News</th>
     * </tr>
     *
     * @param channel
     *            the channel element XMLTree
     * @param out
     *            the output stream
     * @updates out.content
     * @requires [the root of channel is a <channel> tag] and out.is_open
     * @ensures out.content = #out.content * [the HTML "opening" tags]
     */
    private static void outputHeader(XMLTree channel, SimpleWriter out) {
        assert channel != null : "Violation of: channel is not null";
        assert out != null : "Violation of: out is not null";
        assert channel.isTag() && channel.label().equals("channel") : ""
                + "Violation of: the label root of channel is a <channel> tag";
        assert out.isOpen() : "Violation of: out.is_open";
        /*
         * set title and description to empty and check later if they aren't
         * then set them later on.
         */
        String title = "Empty Title";
        String decription = "No description";

        /*
         * find the locations of title and description and get -1 if they Aren't
         * a thing.
         */
        int titleLocation = getChildElement(channel, "title");
        int descriptionLocation = getChildElement(channel, "description");

        /*
         * if the channel child at the element title has children that are
         * greater than 0 then we set the title equal to the child(0) label.
         * also first check that title location exist
         */
        if (titleLocation != -1) {
            if (channel.child(getChildElement(channel, "title"))
                    .numberOfChildren() > 0) {
                title = channel.child(getChildElement(channel, "title"))
                        .child(0).label();
            }
        }
        /*
         * if the channel child at the description element has child that is
         * greater than 0 then set the description equal to the child at 0 label
         * also first check that description exist
         */
        if (descriptionLocation != -1) {
            if (channel.child(getChildElement(channel, "description"))
                    .numberOfChildren() > 0) {
                decription = channel
                        .child(getChildElement(channel, "description")).child(0)
                        .label();
            }
        }

        String link = channel.child(getChildElement(channel, "link")).child(0)
                .label();

        /*
         * Now that we have all values we are able to start printing them out to
         * our html file. We start by opening the html tag head tag and title
         * tag. we are able to put our title in between the tags. and this will
         * work if title is empty also because it will have title of "No Title"
         */
        out.println("<html>\n <head>\n<title>" + title + "</title>\n</head>");
        /*
         * create header for the page we will use the h1 tag. Now because the
         * header will have a link we can create a href and insert the link in
         * order to make it a hyper link.
         */
        out.println("<h1><a href=\"" + link + "\">" + title + "</a></h1>");
        /*
         * next we will use paragraph tags in html to add the description under
         * the header. we will also close the head and start the body to start
         * the layout of the table that we will be making.
         */
        out.println("<p>" + decription + "</p><body>");
        /*
         * after opening the body we are going to want to start our table and
         * set it up with the correct columns I start with a border of 3 because
         * I feel it looks best
         */
        out.println("<table border=\"1\">");
        /*
         * Here we want our first row to have all the names of the important
         * information we will be storing. See we make a row and 3 headers for
         * date, source, and news
         */
        out.println("<tr>\n<th>Date</th>\n<th>Source</th>\n<th>News</th>");
    }

    /**
     * Outputs the "closing" tags in the generated HTML file. These are the
     * expected elements generated by this method:
     *
     * </table>
     * </body> </html>
     *
     * @param out
     *            the output stream
     * @updates out.contents
     * @requires out.is_open
     * @ensures out.content = #out.content * [the HTML "closing" tags]
     */
    private static void outputFooter(SimpleWriter out) {
        assert out != null : "Violation of: out is not null";
        assert out.isOpen() : "Violation of: out.is_open";

        /*
         * closes the table first as it needs to be closed before the file and
         * the body. So we close table then body then html completing our html
         * text.
         */
        out.println("</body>");
        out.println("</html>");

    }

    /**
     * Finds the first occurrence of the given tag among the children of the
     * given {@code XMLTree} and return its index; returns -1 if not found.
     *
     * @param xml
     *            the {@code XMLTree} to search
     * @param tag
     *            the tag to look for
     * @return the index of the first child of type tag of the {@code XMLTree}
     *         or -1 if not found
     * @requires [the label of the root of xml is a tag]
     * @ensures <pre>
     * getChildElement =
     *  [the index of the first child of type tag of the {@code XMLTree} or
     *   -1 if not found]
     * </pre>
     */
    private static int getChildElement(XMLTree xml, String tag) {
        assert xml != null : "Violation of: xml is not null";
        assert tag != null : "Violation of: tag is not null";
        assert xml.isTag() : "Violation of: the label root of xml is a tag";

        int location = -1;
        /*
         * Start i at initial value of 0 because thats first child
         */
        int i = 0;
        /*
         * Use while loop because we want loop to end when finds child that
         * equals tag if we use a for loop it will run extra times being less
         * efficient loop runs from first child till last child or until
         * location is found
         */
        while (i < xml.numberOfChildren() && location == -1) {

            if (xml.child(i).label().equals(tag)) {
                location = i;
            }

            i++;
        }

        return location;

    }

    /**
     * Processes one news item and outputs one table row. The row contains three
     * elements: the publication date, the source, and the title (or
     * description) of the item.
     *
     * @param item
     *            the news item
     * @param out
     *            the output stream
     * @updates out.content
     * @requires [the label of the root of item is an <item> tag] and
     *           out.is_open
     * @ensures <pre>
     * out.content = #out.content *
     *   [an HTML table row with publication date, source, and title of news item]
     * </pre>
     */
    private static void processItem(XMLTree item, SimpleWriter out) {
        assert item != null : "Violation of: item is not null";
        assert out != null : "Violation of: out is not null";
        assert item.isTag() && item.label().equals("item") : ""
                + "Violation of: the label root of item is an <item> tag";
        assert out.isOpen() : "Violation of: out.is_open";

        int titleLocation = getChildElement(item, "title");

        String title = "No title available";

        int description = getChildElement(item, "description");

        if (titleLocation != -1
                && item.child(titleLocation).numberOfChildren() > 0) {

            title = item.child(titleLocation).child(0).label();

        } else if (description != 1
                && item.child(description).numberOfChildren() > 0) {

            title = item.child(description).child(0).label();
        }

        /*
         * for sake of readability I choose to use two lines one where I made
         * the int equal to the location and then i use it in the if and the
         * item.child However, you could use the getChildElement in the if
         * Statement. it would just be hard to read.
         */
        String link = "";
        /*
         * start by setting link location equal to the location where it would
         * be
         */
        int linkLocation = getChildElement(item, "link");
        /*
         * if the location isn't -1 then it is a thing somewhere
         */
        if (linkLocation != -1) {
            /*
             * which means we are able to set our string link equal to it.
             */
            link = item.child(linkLocation).child(0).label();
        }

        /*
         * date is the exact same concept as link just using date variables and
         * pubDate
         */
        String date = "No date available";
        int dateLocation = getChildElement(item, "pubDate");

        if (dateLocation != -1) {
            if (item.child(dateLocation).numberOfChildren() != 0) {
                date = item.child(dateLocation).child(0).label();
            }
        }

        String source = "No source available";
        String sourceLink = "";
        /*
         * get location of element source
         */
        int sourceLocation = getChildElement(item, "source");
        if (sourceLocation != -1) {
            /*
             * if the source tag has a child then we know that is our source
             * string. meaning we set the source string equal to that.
             */
            if (item.child(sourceLocation).numberOfChildren() > 0) {
                source = item.child(sourceLocation).child(0).label();
            }

            if (item.child(sourceLocation).hasAttribute("url")) {
                sourceLink = item.child(sourceLocation).attributeValue("url");
            }
        }

        /*
         * check if the source link is equal to nothing and if it is set the
         * string just equal to no source because the source needs a link and if
         * it does have link set
         */
        String sourceFinal;
        if (sourceLink.isEmpty()) {
            sourceFinal = "<td> no source </td>";
        } else {
            sourceFinal = "<td> <a href = \"" + sourceLink + "\">" + source
                    + "</a></td>";
        }

        String titleFinal;
        /*
         * some titles might have links others might not. so we need two ways of
         * Writing them in our table. First we check if there's no link and if
         * there isn't then we just put title between our table data tags. and
         * if there is a link we need to add href to the html code.
         */
        if (link.isEmpty()) {
            titleFinal = "<td>" + title + "</td>";
        } else {
            titleFinal = "<td><a href = \"" + link + "\">" + title
                    + "</a></td>";
        }

        /*
         * finally in a organized manner we print the date in the date col then
         * the source in source col and final the title in the title col. And we
         * finish by closing the table Row.
         */
        out.print("<tr> \n<td>" + date + "</td>\n");
        out.print(sourceFinal + "\n");
        out.print(titleFinal + "\n");
        out.print("</tr> \n");

    }

    /**
     * Processes one XML RSS (version 2.0) feed from a given URL converting it
     * into the corresponding HTML output file.
     *
     * @param url
     *            the URL of the RSS feed
     * @param file
     *            the name of the HTML output file
     * @param out
     *            the output stream to report progress or errors
     * @updates out.content
     * @requires out.is_open
     * @ensures <pre>
     * [reads RSS feed from url, saves HTML document with table of news items
     *   to file, appends to out.content any needed messages]
     * </pre>
     */
    private static void processFeed(String url, String file, SimpleWriter out) {

        XMLTree xml = new XMLTree1(url);

        /*
         * make channel and output header for each link in their html file
         */
        XMLTree channel = xml.child(0);
        SimpleWriter writer = new SimpleWriter1L(file);

        outputHeader(channel, writer);
        /*
         * loop through each child in the link
         */
        for (int i = 0; i < channel.numberOfChildren(); i++) {

            if (channel.child(i).label().equals("item")) {

                XMLTree item = channel.child(i);

                /*
                 * process the singular link in order to process item
                 */
                processItem(item, writer);

            }
        }
        writer.println("</table>");
        outputFooter(writer);

    }

    /**
     * Main method.
     *
     * @param args
     *            the command line arguments; unused here
     */
    public static void main(String[] args) {
        SimpleReader in = new SimpleReader1L();
        SimpleWriter out = new SimpleWriter1L();

        out.print("Enter an XML file ");
        String url = in.nextLine();

        out.print("Please enter a flie name to print to");
        String fileName = in.nextLine();
        SimpleWriter writer = new SimpleWriter1L(fileName);

        XMLTree xmlFile = new XMLTree1(url);

        /*
         * output top of webpage
         */
        writer.print("<html>\n");
        writer.print("<head>\n");
        writer.print("<title>\n" + xmlFile.attributeValue("title") + "\n");
        writer.print("</title>\n");
        writer.print("</head>\n");
        writer.print("<body>\n");
        writer.print("<h1>\n" + xmlFile.attributeValue("title"));
        writer.print("</h1>\n<ul>\n");

        for (int i = 0; i < xmlFile.numberOfChildren(); i++) {
            String namefile = xmlFile.child(i).attributeValue("file");
            String urlLink = xmlFile.child(i).attributeValue("url");
            String articleName = xmlFile.child(i).attributeValue("name");

            writer.print("<li>\n<p>\n" + "<a href =\"" + namefile + "\">"
                    + articleName + "</a>\n" + "</p>\n</li>");

            processFeed(urlLink, namefile, writer);

        }
        writer.print("</ul>\n");
        outputFooter(writer);

        /*
         * close other streams
         */
        in.close();
        out.close();

    }

}
