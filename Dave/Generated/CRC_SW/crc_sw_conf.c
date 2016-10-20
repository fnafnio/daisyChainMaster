/*********************************************************************************************************************
* DAVE APP Name : CRC_SW       APP Version: 4.0.6
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-16:
 *     - Initial version<br>
 *
 * 2015-04-06:
 *     - comments added <br>
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "crc_sw.h"	

/**********************************************************************************************************************
 * DATA STRUCTURES
 **********************************************************************************************************************/
	  
/* Look up table for the crc-width ranging from 1-bit to 8-bit CRC computation */
uint8_t crc_table_CRC_SW_0[256] = 
{
0,
213,
127,
170,
254,
43,
129,
84,
41,
252,
86,
131,
215,
2,
168,
125,
82,
135,
45,
248,
172,
121,
211,
6,
123,
174,
4,
209,
133,
80,
250,
47,
164,
113,
219,
14,
90,
143,
37,
240,
141,
88,
242,
39,
115,
166,
12,
217,
246,
35,
137,
92,
8,
221,
119,
162,
223,
10,
160,
117,
33,
244,
94,
139,
157,
72,
226,
55,
99,
182,
28,
201,
180,
97,
203,
30,
74,
159,
53,
224,
207,
26,
176,
101,
49,
228,
78,
155,
230,
51,
153,
76,
24,
205,
103,
178,
57,
236,
70,
147,
199,
18,
184,
109,
16,
197,
111,
186,
238,
59,
145,
68,
107,
190,
20,
193,
149,
64,
234,
63,
66,
151,
61,
232,
188,
105,
195,
22,
239,
58,
144,
69,
17,
196,
110,
187,
198,
19,
185,
108,
56,
237,
71,
146,
189,
104,
194,
23,
67,
150,
60,
233,
148,
65,
235,
62,
106,
191,
21,
192,
75,
158,
52,
225,
181,
96,
202,
31,
98,
183,
29,
200,
156,
73,
227,
54,
25,
204,
102,
179,
231,
50,
152,
77,
48,
229,
79,
154,
206,
27,
177,
100,
114,
167,
13,
216,
140,
89,
243,
38,
91,
142,
36,
241,
165,
112,
218,
15,
32,
245,
95,
138,
222,
11,
161,
116,
9,
220,
118,
163,
247,
34,
136,
93,
214,
3,
169,
124,
40,
253,
87,
130,
255,
42,
128,
85,
1,
212,
126,
171,
132,
81,
251,
46,
122,
175,
5,
208,
173,
120,
210,
7,
83,
134,
44,
249,
};
CRC_SW_CONFIG_t CRC_SW_0_config =
{
  .crc_width = 8,
  .crc_poly = 213,
  .crc_initval = 0,
  .input_reflection =  false,
  .output_reflection = false,
  .output_inversion = false
};
CRC_SW_t CRC_SW_0 = 
{
  .config = &CRC_SW_0_config,
  .crc_runningval = 0U,
  .msb_mask = 0U,
  .crc_mask = 0U,
  .crc_shift = 0U,
  .crctable = (uint32_t*)&crc_table_CRC_SW_0,
  .tableoffset = 1U
};