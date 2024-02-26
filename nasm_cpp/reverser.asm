section. data

section. text
    global _start


_start:
	push ebp
	mov ebp,esp
	push esi
	push edi

	xor	eax,eax
	mov	edi,[ebp+8]
	mov	esi,[ebp+12]
	mov ecx,[ebp+16]
	test	ecx,ecx

	lea esi,[esi+ecx*4-4]
	pushfd
	std

@@:		
    lodsd
	mov	[edi],eax
	add edi,4
	dec ecx
	jnz	@B

	popfd
	mov eax,1

	pop edi
	pop esi
	pop ebp

	ret
saida:
    mov     eax,0x1         ;indica o final de operação, corresponde a System.exit
    mov     ebx,0x0         ;informa o estado final do programa - 0 sem erro
    int 0x80                 