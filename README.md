<html>

<head>
<meta http-equiv=Content-Type content="text/html; charset=windows-1252">
<meta name=Generator content="Microsoft Word 15 (filtered)">
<style>
<!--
 /* Font Definitions */
 @font-face
	{font-family:Wingdings;
	panose-1:5 0 0 0 0 0 0 0 0 0;}
@font-face
	{font-family:"Cambria Math";
	panose-1:2 4 5 3 5 4 6 3 2 4;}
@font-face
	{font-family:Calibri;
	panose-1:2 15 5 2 2 2 4 3 2 4;}
 /* Style Definitions */
 p.MsoNormal, li.MsoNormal, div.MsoNormal
	{margin-top:0in;
	margin-right:0in;
	margin-bottom:8.0pt;
	margin-left:0in;
	line-height:107%;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;}
p.MsoHeader, li.MsoHeader, div.MsoHeader
	{mso-style-link:"Header Char";
	margin:0in;
	margin-bottom:.0001pt;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;}
p.MsoFooter, li.MsoFooter, div.MsoFooter
	{mso-style-link:"Footer Char";
	margin:0in;
	margin-bottom:.0001pt;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;}
p.MsoListParagraph, li.MsoListParagraph, div.MsoListParagraph
	{margin-top:0in;
	margin-right:0in;
	margin-bottom:8.0pt;
	margin-left:.5in;
	line-height:107%;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;}
p.MsoListParagraphCxSpFirst, li.MsoListParagraphCxSpFirst, div.MsoListParagraphCxSpFirst
	{margin-top:0in;
	margin-right:0in;
	margin-bottom:0in;
	margin-left:.5in;
	margin-bottom:.0001pt;
	line-height:107%;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;}
p.MsoListParagraphCxSpMiddle, li.MsoListParagraphCxSpMiddle, div.MsoListParagraphCxSpMiddle
	{margin-top:0in;
	margin-right:0in;
	margin-bottom:0in;
	margin-left:.5in;
	margin-bottom:.0001pt;
	line-height:107%;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;}
p.MsoListParagraphCxSpLast, li.MsoListParagraphCxSpLast, div.MsoListParagraphCxSpLast
	{margin-top:0in;
	margin-right:0in;
	margin-bottom:8.0pt;
	margin-left:.5in;
	line-height:107%;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;}
p.paragraph, li.paragraph, div.paragraph
	{mso-style-name:paragraph;
	margin-right:0in;
	margin-left:0in;
	font-size:12.0pt;
	font-family:"Times New Roman",serif;}
span.normaltextrun
	{mso-style-name:normaltextrun;}
span.eop
	{mso-style-name:eop;}
span.HeaderChar
	{mso-style-name:"Header Char";
	mso-style-link:Header;}
span.FooterChar
	{mso-style-name:"Footer Char";
	mso-style-link:Footer;}
.MsoChpDefault
	{font-family:"Calibri",sans-serif;}
.MsoPapDefault
	{margin-bottom:8.0pt;
	line-height:107%;}
 /* Page Definitions */
 @page WordSection1
	{size:8.5in 11.0in;
	margin:1.0in 1.0in 1.0in 1.0in;}
div.WordSection1
	{page:WordSection1;}
 /* List Definitions */
 ol
	{margin-bottom:0in;}
ul
	{margin-bottom:0in;}
-->
</style>

</head>

<body lang=EN-US>

<div class=WordSection1>

<p class=MsoNormal align=right style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:right;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal align=right style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:right;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>9 May 2018</span></p>

<p class=MsoNormal align=right style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:right;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>CSS503 Systems Programming</span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>I. DOCUMENTATION</span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>&nbsp;</span></p>

<p class=paragraph style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;text-indent:-1.0in;vertical-align:baseline'>PURPOSE:     In
this programming assignment, we will extend the original-so-called
sleeping-barber problem to a multiple sleeping barbers problem where many
customers visit a barbershop and receive a haircut service from any one
available among barbers in the shop.&nbsp;&nbsp;</p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;text-indent:-1.0in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;text-indent:-1.0in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>DESIGN:        In
the original problem, all action of both the barbers and the customers take an
unknown amount of time and only one participant can change states at a time
(execute critical section). The challenge in extending the original program to
work with multiple barbers and customers is that multiple participants can
change states at one time (execute critical section). This is because all
barber threads can run at the same time. Therefore, the original program must
be modified to allow the multiple threads to run at once. Since only two
threads interact, Peterson’s algorithm is used </span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;text-indent:-1.0in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>To implement this
extension (use multi-threading to extend the original program to work with
multiple barbers and customers), all files must be modified and the Shop class should
function as a monitor. Since most of the modifications are stated in the
assignment in pseudo code, most of the design aspect was determining what types
of data members to use to keep track of the customer and barber threads.</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>The driver.cpp file
did have to be modified to take another argument (number of barbers) and
initialize the barber threads int the same manner as to how the customer threads
are created and those threads had to all be asynchronously canceled before the
end of the program.</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>The modifications
for Shop.h and Shop.cpp included <span class=normaltextrun>two Shop constructors
(<b>Shop()</b> and <b>Shop(int nBarbers, int nChairs)</b>) as specified and in
order to create a Shop object with the correct number of barbers and waiting
chairs, <b>int </b><b>visitShop(int customerId)</b> so that multiple barbers
can be assigned to customers, <b>void</b> <b>leaveShop(int customerId, int
barberId)</b></span> to allow interaction between the assigned barber and
customer<span class=normaltextrun>, <b>void </b><b>helloCustomer(int barberId)</b>
to allow one of several possible idle barbers to be signal by a waiting
customer and change states, and <b>byeCustomer(int barberId)</b> to signal next
waiting for a specific barber.</span></span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span class=normaltextrun><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>&nbsp;</span></span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.0in;margin-bottom:.0001pt;line-height:normal'><span
class=normaltextrun><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>Since
there are multiple barbers and customer each of which require multiple
conditions for signaling purposes, structures for both barbers and customers
are created. A queue is used to keep track of the IDs of barbers who are
sleeping since it does not matter (unlike with the customers) which barber
services which customer. Once a barber is assigned to a customer, signals
should only effect those two threads until the barber has finished servicing
the customer. The actual barber structures are kept in an arrays since the
number of barbers remains constant. A map is used to keep track of the customer
threads, their states, and their assigned barber so the proper barber is
signaled. The customer structures are created and added to the map. (See source
code for implementation details)</span></span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>II. SOURCE CODE</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>Please
find the following source code files uploaded along with the report.</span></p>

<p class=MsoListParagraphCxSpFirst style='margin-top:0in;margin-right:0in;
margin-bottom:0in;margin-left:.25in;margin-bottom:.0001pt;text-indent:-.25in;
line-height:normal'><span style='font-size:12.0pt;font-family:Symbol'>·<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>driver.cpp</span></p>

<p class=MsoListParagraphCxSpMiddle style='margin-top:0in;margin-right:0in;
margin-bottom:0in;margin-left:.25in;margin-bottom:.0001pt;text-indent:-.25in;
line-height:normal'><span style='font-size:12.0pt;font-family:Symbol'>·<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>Shop.h</span></p>

<p class=MsoListParagraphCxSpLast style='margin-top:0in;margin-right:0in;
margin-bottom:0in;margin-left:.25in;margin-bottom:.0001pt;text-indent:-.25in;
line-height:normal'><span style='font-size:12.0pt;font-family:Symbol'>·<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>Shop.cpp </span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>III. EXECUTION OUTPUT</span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>&nbsp;</span></p>

<table class=MsoTableGrid border=1 cellspacing=0 cellpadding=0 width=0
 style='width:7.5in;margin-left:-36.25pt;border-collapse:collapse;border:none'>
 <tr>
  <td width=360 valign=top style='width:3.75in;border:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
  text-align:center;line-height:normal;vertical-align:baseline'><span
  style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>./sleepingBarbers
  1 1 10 1000</span></p>
  </td>
  <td width=360 valign=top style='width:3.75in;border:solid windowtext 1.0pt;
  border-left:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
  text-align:center;line-height:normal;vertical-align:baseline'><span
  style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>./sleepingBarbers
  3 1 10 1000</span></p>
  </td>
 </tr>
 <tr>
  <td width=360 valign=top style='width:3.75in;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>kehoek2@uw1-320-09:~/CSS503/Project2/Modified$
  ./sleepingBarber 1 1 10 1000</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[1]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[1]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[1]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[2]]: takes a waiting chair. #
  waiting seats available = 0</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[1]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[1]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[2]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[2]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[2]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[3]]: takes a waiting chair. #
  waiting seats available = 0</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[2]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[2]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[3]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[3]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[3]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[4]]: takes a waiting chair. #
  waiting seats available = 0</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[3]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[3]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[4]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[4]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[5]]: takes a waiting chair. #
  waiting seats available = 0</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[4]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[6]: leaves the shop because of
  no available waiting chairs.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[7]: leaves the shop because of
  no available waiting chairs.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[4]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[4]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[5]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[5]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[5]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[8]]: takes a waiting chair. #
  waiting seats available = 0</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[9]: leaves the shop because of
  no available waiting chairs.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[5]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[5]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[8]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[8]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[8]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[10]]: takes a waiting chair. #
  waiting seats available = 0</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[8]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[8]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[10]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[10]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[10]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[10]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[10]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'># customers who didn't receive a service
  = 3</span></p>
  <p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
  text-align:center;line-height:normal'><span style='font-size:10.0pt;
  font-family:"Times New Roman",serif'>&nbsp;</span></p>
  </td>
  <td width=360 valign=top style='width:3.75in;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>kehoek2@uw1-320-09:~/CSS503/Project2/Modified$
  ./sleepingBarber 3 1 10 1000</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[1]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[1]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[1]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[2]: moves to a service
  chair[1], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[2]: wait for barber[1] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: starts a hair-cut service for
  customer[2]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[1]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[1]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[3]: moves to a service
  chair[2], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[3]: wait for barber[2] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: starts a hair-cut service for
  customer[3]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: says he's done with a
  hair-cut service for customer[2]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[2]: says good-bye to barber[1]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[4]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[4]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[4]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: says he's done with a
  hair-cut service for customer[3]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[3]: says good-bye to barber[2]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[5]: moves to a service
  chair[1], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[5]: wait for barber[1] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: starts a hair-cut service for
  customer[5]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[4]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[4]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[6]: moves to a service
  chair[2], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[6]: wait for barber[2] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: starts a hair-cut service for
  customer[6]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[7]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[7]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[7]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: says he's done with a
  hair-cut service for customer[5]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[5]: says good-bye to barber[1]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[8]: moves to a service
  chair[1], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[8]: wait for barber[1] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: starts a hair-cut service for
  customer[8]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: says he's done with a
  hair-cut service for customer[6]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[6]: says good-bye to barber[2]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[7]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[7]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[9]: moves to a service chair[2],
  # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[9]: wait for barber[2] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: starts a hair-cut service for
  customer[9]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: says he's done with a
  hair-cut service for customer[8]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[8]: says good-bye to barber[1]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[1]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[10]: moves to a service
  chair[0], # waiting seats available = 1</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[10]: wait for barber[0] to be
  done with hair-cut.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: starts a hair-cut service for
  customer[10]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: says he's done with a
  hair-cut service for customer[9]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[9]: says good-bye to barber[2]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[2]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: says he's done with a
  hair-cut service for customer[10]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>customer[10]: says good-bye to barber[0]</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: calls in another customer.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'>barber[0]: sleeps because of no
  customers.</span></p>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:10.0pt;font-family:
  "Times New Roman",serif;color:black'># customers who didn't receive a service
  = 0</span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:"Times New Roman",serif;
color:black'>&nbsp;</span></p>

<table class=MsoTableGrid border=1 cellspacing=0 cellpadding=0
 style='border-collapse:collapse;border:none'>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>Barbers</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-left:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>Chairs</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-left:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>Customers</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-left:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>Service time</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-left:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>Drop off</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>114</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>60</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>43</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>80</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>13</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>95</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>100</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>2</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>101</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>2</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>101</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>2</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>102</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>102</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1            </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>102</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1            </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1            </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1            </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1            </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>2</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1            </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1          </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1          </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1          </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1          </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1          </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1          </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1          </span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>103</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>3</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>2</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>2</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1</span></p>
  </td>
 </tr>
 <tr>
  <td width=72 valign=top style='width:93.5pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>5</span></p>
  </td>
  <td width=65 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
  <td width=88 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>200</span></p>
  </td>
  <td width=71 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>1000</span></p>
  </td>
  <td width=58 valign=top style='width:93.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0in 5.4pt 0in 5.4pt'>
  <p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
  normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:
  "Times New Roman",serif;color:black'>0</span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal;vertical-align:baseline'><span style='font-size:12.0pt;font-family:"Times New Roman",serif;
color:black'>&nbsp;</span></p>

<p class=MsoNormal align=center style='margin-bottom:0in;margin-bottom:.0001pt;
text-align:center;line-height:normal'><span style='font-size:12.0pt;font-family:
"Times New Roman",serif'>IV. DISCUSSION</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>RESULTS
&amp; EFFECTIVENESS</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>While testing the
program, one must keep in mind that each customer thread is wait to be created
for a random time period between 0 and 999 (usleep(rand() % 10000)). Therefore
there will be some deviation in the results. Furthermore, the machine that the
program is running on is one of the Linux lab computers which means that
multiple user could be using the same computer. Since a user thread requires a
kernel thread to run, this could cause starvation and result in more drop off
customers than would normally occur. Furthermore, these computers have a set
number of cores meaning that only an equivalent threads can execute
simultaneously.</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;text-indent:-1.5in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>ANALYSIS:               Two
test were performed. The first was to determine</span><span style='font-size:
12.0pt;font-family:"Times New Roman",serif;color:black'> how many waiting
chairs would be necessary for 200 customers to be served by 1 barber with no
drop offs. The second was to determine how many barbers would be necessary for
200 customers to be served without any waiting chairs with no drop offs?</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal;vertical-align:baseline'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal;vertical-align:baseline'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Regarding
the first test the trial and error method was used to get data (see table
above). It was determined that 103 waiting chairs would be necessary to sever
all customers without any drop offs. Since a degree of randomness is inherent
in this program in the code and resulting from aforementioned differences
resulting from the number of cores, clock skew, and number of people using the
computer. The test was repeated several times resulting in the following…  </span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Standard
deviation: 0.849</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Mean =
0.571</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Median
= 0</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Since
a majority of the data points (84.9%) are within 1 standard deviation of the
mean on a normal distribution graph, it can be said that 103 waiting chairs is
a valid answer.</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal;vertical-align:baseline'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal;vertical-align:baseline'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Data
for the second test was also acquired using the trial and error method (see
table above). It was determined that 5 barbers would be necessary. The test was
repeated several times resulting in the following…  </span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Standard
deviation: 0.624</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Mean:
0.333</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Median:
0</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>Since
a majority of the data points (62.4%) are within 1 standard deviation of the
mean on a normal distribution graph, it can be said that 5 barbers is a valid
answer.</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif;
color:black'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif;color:black'>It can
be colluded from these tests that the program works on two extremes (with 0
waiting chairs and with 1 barber). It can also be stated that the primary
limitations of the program is scheduling the threads and available cores.</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal;vertical-align:baseline'><b><span style='font-size:12.0pt;font-family:
"Times New Roman",serif;color:black'>&#8239;</span></b><span style='font-size:
12.0pt;font-family:"Times New Roman",serif;color:black'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;text-indent:-1.5in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>LIMITATIONS:         The
primary limitations of the program come not from the software but from the
hardware. Essentially, the program creates a collection of user threads each of
which needs a kernel thread to execute. Therefore, the primary limitation</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;text-indent:-1.5in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;text-indent:-1.5in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>                                    Since
threads are being used and threads context switch faster than processes, the
limitation resulting form the overhead that context switching inevitably causes
is reduced.</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;text-indent:-1.5in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;text-indent:-1.5in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>                                    Finally,
how the OS schedules and allocates resources could cause a reduction in speed,
especially since there are multiple users using the same resources.</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-top:0in;margin-right:0in;margin-bottom:0in;
margin-left:1.5in;margin-bottom:.0001pt;text-indent:-1.5in;line-height:normal'><span
style='font-size:12.0pt;font-family:"Times New Roman",serif'>IMPROVEMENTS:   The
most important significant improvement that could be made given the limitation
is running the program on a dedicated machine with a greater number of cores
and a single user.</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

<p class=MsoNormal style='margin-bottom:0in;margin-bottom:.0001pt;line-height:
normal'><span style='font-size:12.0pt;font-family:"Times New Roman",serif'>&nbsp;</span></p>

</div>

</body>

</html>
