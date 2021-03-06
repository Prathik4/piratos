/*	  Copyright (c) 2011, Simon Stapleton (simon.stapleton@gmail.com)	  */
/*										  */
/*				All rights reserved.				  */
/*										  */
/* Redistribution  and	use   in  source  and  binary  forms,	with  or  without */
/* modification, are permitted provided that the following conditions are met:	  */
/*										  */
/* Redistributions of  source code must	 retain the above copyright  notice, this */
/* list of conditions and the following disclaimer.				  */
/*										  */
/* Redistributions in binary form must reproduce the above copyright notice, this */
/* list of conditions and the following disclaimer in the documentation and/or	  */
/* other materials provided with the distribution.				  */
/*										  */
/* Neither the name of	the developer nor the names of	other contributors may be */
/* used	 to  endorse or	 promote  products  derived  from this	software  without */
/* specific prior written permission.						  */
/*										  */
/* THIS SOFTWARE  IS PROVIDED BY THE  COPYRIGHT HOLDERS AND CONTRIBUTORS  "AS IS" */
/* AND ANY  EXPRESS OR	IMPLIED WARRANTIES,  INCLUDING, BUT  NOT LIMITED  TO, THE */
/* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE */
/* DISCLAIMED. IN NO  EVENT SHALL THE COPYRIGHT HOLDER OR  CONTRIBUTORS BE LIABLE */
/* FOR	ANY DIRECT,  INDIRECT, INCIDENTAL,  SPECIAL, EXEMPLARY,	 OR CONSEQUENTIAL */
/* DAMAGES (INCLUDING,	BUT NOT	 LIMITED TO, PROCUREMENT  OF SUBSTITUTE	 GOODS OR */
/* SERVICES; LOSS  OF USE,  DATA, OR PROFITS;  OR BUSINESS  INTERRUPTION) HOWEVER */
/* CAUSED AND ON ANY THEORY OF	LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, */
/* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING	IN ANY WAY OUT OF THE USE */
/* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.		  */

.equ	IRQ_BASE,	0x2000b200

.equ	IRQ0_PENDING,	0x00000000
.equ	IRQ1_PENDING,	0x00000004
.equ	IRQ2_PENDING,	0x00000008

.equ	IRQ_BANK1,	0x00000100
.equ	IRQ_BANK2,	0x00000200

.equ	IRQ_BANK1_DUP1,	0x000c0000	/* bitmask of IRQs already handled in bank 0 */
.equ	IRQ_BANK1_DUP2,	0x00000680	/* Twice becase they don't fit into one BIC  */
.equ	IRQ_BANK2_DUP1,	0x43000000	/* which can clear 8 contiguous bits with a  */
.equ	IRQ_BANK2_DUP2,	0x00e00000	/* 4 bit rotation                            */

.equ MODE_BITS,   0x1F		 /* Bit mask for mode bits in CPSR */
.equ USR_MODE,    0x10		 /* User mode */
.equ FIQ_MODE,    0x11		 /* Fast Interrupt Request mode */
.equ IRQ_MODE,    0x12		 /* Interrupt Request mode */
.equ SVC_MODE,    0x13		 /* Supervisor mode */
.equ ABT_MODE,    0x17		 /* Abort mode */
.equ UND_MODE,    0x1B		 /* Undefined Instruction mode */
.equ SYS_MODE,    0x1F		 /* System mode */

