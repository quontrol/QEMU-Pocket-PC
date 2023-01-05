int dyngen_code(uint8_t *gen_code_buf,
                uint16_t *label_offsets, uint16_t *jmp_offsets,
                const uint16_t *opc_buf, const uint32_t *opparam_buf, const long *gen_labels)
{
    uint8_t *gen_code_ptr;
    const uint16_t *opc_ptr;
    const uint32_t *opparam_ptr;

    gen_code_ptr = gen_code_buf;
    opc_ptr = opc_buf;
    opparam_ptr = opparam_buf;
    for(;;) {
        switch(*opc_ptr++) {
case INDEX_op_movl_A0_EAX: {
    extern void op_movl_A0_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_EAX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EAX: {
    extern void op_addl_A0_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EAX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EAX_s1: {
    extern void op_addl_A0_EAX_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EAX_s1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EAX_s2: {
    extern void op_addl_A0_EAX_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EAX_s2+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EAX_s3: {
    extern void op_addl_A0_EAX_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EAX_s3+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T0_EAX: {
    extern void op_movl_T0_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_EAX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_EAX: {
    extern void op_movl_T1_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_EAX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_EAX: {
    extern void op_movh_T0_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_EAX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T1_EAX: {
    extern void op_movh_T1_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_EAX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EAX_T0: {
    extern void op_movl_EAX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EAX_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EAX_T1: {
    extern void op_movl_EAX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EAX_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EAX_A0: {
    extern void op_movl_EAX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EAX_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_EAX_T1_T0: {
    extern void op_cmovw_EAX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_EAX_T1_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_cmovl_EAX_T1_T0: {
    extern void op_cmovl_EAX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_EAX_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_EAX_T0: {
    extern void op_movw_EAX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EAX_T0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_movw_EAX_T1: {
    extern void op_movw_EAX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EAX_T1+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_movw_EAX_A0: {
    extern void op_movw_EAX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EAX_A0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_movb_EAX_T0: {
    extern void op_movb_EAX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EAX_T0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movh_EAX_T0: {
    extern void op_movh_EAX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EAX_T0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movb_EAX_T1: {
    extern void op_movb_EAX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EAX_T1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movh_EAX_T1: {
    extern void op_movh_EAX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EAX_T1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movl_A0_ECX: {
    extern void op_movl_A0_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_ECX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_ECX: {
    extern void op_addl_A0_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ECX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_ECX_s1: {
    extern void op_addl_A0_ECX_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ECX_s1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_ECX_s2: {
    extern void op_addl_A0_ECX_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ECX_s2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_ECX_s3: {
    extern void op_addl_A0_ECX_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ECX_s3+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_T0_ECX: {
    extern void op_movl_T0_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_ECX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_ECX: {
    extern void op_movl_T1_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_ECX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_ECX: {
    extern void op_movh_T0_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_ECX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movh_T1_ECX: {
    extern void op_movh_T1_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_ECX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_ECX_T0: {
    extern void op_movl_ECX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ECX_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_ECX_T1: {
    extern void op_movl_ECX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ECX_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_ECX_A0: {
    extern void op_movl_ECX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ECX_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_ECX_T1_T0: {
    extern void op_cmovw_ECX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_ECX_T1_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_cmovl_ECX_T1_T0: {
    extern void op_cmovl_ECX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_ECX_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_ECX_T0: {
    extern void op_movw_ECX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ECX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_ECX_T1: {
    extern void op_movw_ECX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ECX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_ECX_A0: {
    extern void op_movw_ECX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ECX_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_ECX_T0: {
    extern void op_movb_ECX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_ECX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_ECX_T0: {
    extern void op_movh_ECX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_ECX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_ECX_T1: {
    extern void op_movb_ECX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_ECX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_ECX_T1: {
    extern void op_movh_ECX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_ECX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movl_A0_EDX: {
    extern void op_movl_A0_EDX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_EDX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EDX: {
    extern void op_addl_A0_EDX();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EDX_s1: {
    extern void op_addl_A0_EDX_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDX_s1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EDX_s2: {
    extern void op_addl_A0_EDX_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDX_s2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EDX_s3: {
    extern void op_addl_A0_EDX_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDX_s3+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_T0_EDX: {
    extern void op_movl_T0_EDX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_EDX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_EDX: {
    extern void op_movl_T1_EDX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_EDX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_EDX: {
    extern void op_movh_T0_EDX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_EDX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movh_T1_EDX: {
    extern void op_movh_T1_EDX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_EDX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_EDX_T0: {
    extern void op_movl_EDX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EDX_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EDX_T1: {
    extern void op_movl_EDX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EDX_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EDX_A0: {
    extern void op_movl_EDX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EDX_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_EDX_T1_T0: {
    extern void op_cmovw_EDX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_EDX_T1_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_cmovl_EDX_T1_T0: {
    extern void op_cmovl_EDX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_EDX_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_EDX_T0: {
    extern void op_movw_EDX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EDX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EDX_T1: {
    extern void op_movw_EDX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EDX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EDX_A0: {
    extern void op_movw_EDX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EDX_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EDX_T0: {
    extern void op_movb_EDX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EDX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EDX_T0: {
    extern void op_movh_EDX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EDX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EDX_T1: {
    extern void op_movb_EDX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EDX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EDX_T1: {
    extern void op_movh_EDX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EDX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movl_A0_EBX: {
    extern void op_movl_A0_EBX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_EBX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EBX: {
    extern void op_addl_A0_EBX();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EBX_s1: {
    extern void op_addl_A0_EBX_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBX_s1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EBX_s2: {
    extern void op_addl_A0_EBX_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBX_s2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EBX_s3: {
    extern void op_addl_A0_EBX_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBX_s3+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_T0_EBX: {
    extern void op_movl_T0_EBX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_EBX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_EBX: {
    extern void op_movl_T1_EBX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_EBX+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_EBX: {
    extern void op_movh_T0_EBX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_EBX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movh_T1_EBX: {
    extern void op_movh_T1_EBX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_EBX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_EBX_T0: {
    extern void op_movl_EBX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EBX_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EBX_T1: {
    extern void op_movl_EBX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EBX_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EBX_A0: {
    extern void op_movl_EBX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EBX_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_EBX_T1_T0: {
    extern void op_cmovw_EBX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_EBX_T1_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_cmovl_EBX_T1_T0: {
    extern void op_cmovl_EBX_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_EBX_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_EBX_T0: {
    extern void op_movw_EBX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EBX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EBX_T1: {
    extern void op_movw_EBX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EBX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EBX_A0: {
    extern void op_movw_EBX_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EBX_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EBX_T0: {
    extern void op_movb_EBX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EBX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EBX_T0: {
    extern void op_movh_EBX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EBX_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EBX_T1: {
    extern void op_movb_EBX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EBX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EBX_T1: {
    extern void op_movh_EBX_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EBX_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movl_A0_ESP: {
    extern void op_movl_A0_ESP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_ESP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_ESP: {
    extern void op_addl_A0_ESP();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_ESP_s1: {
    extern void op_addl_A0_ESP_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESP_s1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_ESP_s2: {
    extern void op_addl_A0_ESP_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESP_s2+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_ESP_s3: {
    extern void op_addl_A0_ESP_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESP_s3+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T0_ESP: {
    extern void op_movl_T0_ESP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_ESP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_ESP: {
    extern void op_movl_T1_ESP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_ESP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_ESP: {
    extern void op_movh_T0_ESP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_ESP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T1_ESP: {
    extern void op_movh_T1_ESP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_ESP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_ESP_T0: {
    extern void op_movl_ESP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ESP_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_ESP_T1: {
    extern void op_movl_ESP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ESP_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_ESP_A0: {
    extern void op_movl_ESP_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ESP_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_ESP_T1_T0: {
    extern void op_cmovw_ESP_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_ESP_T1_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_cmovl_ESP_T1_T0: {
    extern void op_cmovl_ESP_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_ESP_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_ESP_T0: {
    extern void op_movw_ESP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ESP_T0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_movw_ESP_T1: {
    extern void op_movw_ESP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ESP_T1+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_movw_ESP_A0: {
    extern void op_movw_ESP_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ESP_A0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_movb_ESP_T0: {
    extern void op_movb_ESP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_ESP_T0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movh_ESP_T0: {
    extern void op_movh_ESP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_ESP_T0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movb_ESP_T1: {
    extern void op_movb_ESP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_ESP_T1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movh_ESP_T1: {
    extern void op_movh_ESP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_ESP_T1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_movl_A0_EBP: {
    extern void op_movl_A0_EBP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_EBP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EBP: {
    extern void op_addl_A0_EBP();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBP+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EBP_s1: {
    extern void op_addl_A0_EBP_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBP_s1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EBP_s2: {
    extern void op_addl_A0_EBP_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBP_s2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EBP_s3: {
    extern void op_addl_A0_EBP_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EBP_s3+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_T0_EBP: {
    extern void op_movl_T0_EBP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_EBP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_EBP: {
    extern void op_movl_T1_EBP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_EBP+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_EBP: {
    extern void op_movh_T0_EBP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_EBP+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movh_T1_EBP: {
    extern void op_movh_T1_EBP();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_EBP+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_EBP_T0: {
    extern void op_movl_EBP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EBP_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EBP_T1: {
    extern void op_movl_EBP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EBP_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EBP_A0: {
    extern void op_movl_EBP_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EBP_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_EBP_T1_T0: {
    extern void op_cmovw_EBP_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_EBP_T1_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_cmovl_EBP_T1_T0: {
    extern void op_cmovl_EBP_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_EBP_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_EBP_T0: {
    extern void op_movw_EBP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EBP_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EBP_T1: {
    extern void op_movw_EBP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EBP_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EBP_A0: {
    extern void op_movw_EBP_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EBP_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EBP_T0: {
    extern void op_movb_EBP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EBP_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EBP_T0: {
    extern void op_movh_EBP_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EBP_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EBP_T1: {
    extern void op_movb_EBP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EBP_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EBP_T1: {
    extern void op_movh_EBP_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EBP_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movl_A0_ESI: {
    extern void op_movl_A0_ESI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_ESI+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_ESI: {
    extern void op_addl_A0_ESI();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESI+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_ESI_s1: {
    extern void op_addl_A0_ESI_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESI_s1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_ESI_s2: {
    extern void op_addl_A0_ESI_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESI_s2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_ESI_s3: {
    extern void op_addl_A0_ESI_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_ESI_s3+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_T0_ESI: {
    extern void op_movl_T0_ESI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_ESI+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_ESI: {
    extern void op_movl_T1_ESI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_ESI+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_ESI: {
    extern void op_movh_T0_ESI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_ESI+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movh_T1_ESI: {
    extern void op_movh_T1_ESI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_ESI+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_ESI_T0: {
    extern void op_movl_ESI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ESI_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_ESI_T1: {
    extern void op_movl_ESI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ESI_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_ESI_A0: {
    extern void op_movl_ESI_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_ESI_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_ESI_T1_T0: {
    extern void op_cmovw_ESI_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_ESI_T1_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_cmovl_ESI_T1_T0: {
    extern void op_cmovl_ESI_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_ESI_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_ESI_T0: {
    extern void op_movw_ESI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ESI_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_ESI_T1: {
    extern void op_movw_ESI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ESI_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_ESI_A0: {
    extern void op_movw_ESI_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_ESI_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_ESI_T0: {
    extern void op_movb_ESI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_ESI_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_ESI_T0: {
    extern void op_movh_ESI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_ESI_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_ESI_T1: {
    extern void op_movb_ESI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_ESI_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_ESI_T1: {
    extern void op_movh_ESI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_ESI_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movl_A0_EDI: {
    extern void op_movl_A0_EDI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_EDI+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_A0_EDI: {
    extern void op_addl_A0_EDI();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDI+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EDI_s1: {
    extern void op_addl_A0_EDI_s1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDI_s1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EDI_s2: {
    extern void op_addl_A0_EDI_s2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDI_s2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_A0_EDI_s3: {
    extern void op_addl_A0_EDI_s3();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_EDI_s3+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_T0_EDI: {
    extern void op_movl_T0_EDI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_EDI+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_EDI: {
    extern void op_movl_T1_EDI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_EDI+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movh_T0_EDI: {
    extern void op_movh_T0_EDI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T0_EDI+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movh_T1_EDI: {
    extern void op_movh_T1_EDI();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_T1_EDI+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_EDI_T0: {
    extern void op_movl_EDI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EDI_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EDI_T1: {
    extern void op_movl_EDI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EDI_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_EDI_A0: {
    extern void op_movl_EDI_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_EDI_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_cmovw_EDI_T1_T0: {
    extern void op_cmovw_EDI_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovw_EDI_T1_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_cmovl_EDI_T1_T0: {
    extern void op_cmovl_EDI_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmovl_EDI_T1_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movw_EDI_T0: {
    extern void op_movw_EDI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EDI_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EDI_T1: {
    extern void op_movw_EDI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EDI_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movw_EDI_A0: {
    extern void op_movw_EDI_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_EDI_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EDI_T0: {
    extern void op_movb_EDI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EDI_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EDI_T0: {
    extern void op_movh_EDI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EDI_T0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movb_EDI_T1: {
    extern void op_movb_EDI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movb_EDI_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movh_EDI_T1: {
    extern void op_movh_EDI_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movh_EDI_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_update2_cc: {
    extern void op_update2_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_update2_cc+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_update1_cc: {
    extern void op_update1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_update1_cc+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_update_neg_cc: {
    extern void op_update_neg_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_update_neg_cc+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_cmpl_T0_T1_cc: {
    extern void op_cmpl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpl_T0_T1_cc+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_update_inc_cc: {
    extern void op_update_inc_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_update_inc_cc)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 8) = 0xEA000000;
    gen_code_ptr += 36;
}
break;

case INDEX_op_testl_T0_T1_cc: {
    extern void op_testl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_testl_T0_T1_cc+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_addl_T0_T1: {
    extern void op_addl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_orl_T0_T1: {
    extern void op_orl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_orl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_andl_T0_T1: {
    extern void op_andl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_andl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_subl_T0_T1: {
    extern void op_subl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_xorl_T0_T1: {
    extern void op_xorl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_xorl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_negl_T0: {
    extern void op_negl_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_negl_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_incl_T0: {
    extern void op_incl_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_incl_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_decl_T0: {
    extern void op_decl_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_decl_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_notl_T0: {
    extern void op_notl_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_notl_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_bswapl_T0: {
    extern void op_bswapl_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_bswapl_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_mulb_AL_T0: {
    extern void op_mulb_AL_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mulb_AL_T0+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_imulb_AL_T0: {
    extern void op_imulb_AL_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_imulb_AL_T0+0), 60);
    gen_code_ptr += 60;
}
break;

case INDEX_op_mulw_AX_T0: {
    extern void op_mulw_AX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mulw_AX_T0+0), 60);
    gen_code_ptr += 60;
}
break;

case INDEX_op_imulw_AX_T0: {
    extern void op_imulw_AX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_imulw_AX_T0+0), 76);
    gen_code_ptr += 76;
}
break;

case INDEX_op_mull_EAX_T0: {
    extern void op_mull_EAX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mull_EAX_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_imull_EAX_T0: {
    extern void op_imull_EAX_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_imull_EAX_T0+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_imulw_T0_T1: {
    extern void op_imulw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_imulw_T0_T1+0), 48);
    gen_code_ptr += 48;
}
break;

case INDEX_op_imull_T0_T1: {
    extern void op_imull_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_imull_T0_T1+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_divb_AL_T0: {
    extern void op_divb_AL_T0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_divb_AL_T0+0), 164);
    gen_code_ptr += 164;
}
break;

case INDEX_op_idivb_AL_T0: {
    extern void op_idivb_AL_T0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_idivb_AL_T0+0), 172);
    gen_code_ptr += 172;
}
break;

case INDEX_op_divw_AX_T0: {
    extern void op_divw_AX_T0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_divw_AX_T0+0), 192);
    gen_code_ptr += 192;
}
break;

case INDEX_op_idivw_AX_T0: {
    extern void op_idivw_AX_T0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF30;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_idivw_AX_T0+0), 196);
    gen_code_ptr += 196;
}
break;

case INDEX_op_divl_EAX_T0: {
    extern void op_divl_EAX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_divl_EAX_T0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_idivl_EAX_T0: {
    extern void op_idivl_EAX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_idivl_EAX_T0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_movl_T0_imu: {
    long param1;
    extern void op_movl_T0_imu();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_imu+0), 12);
    *(uint32_t *)(gen_code_ptr + 12 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_movl_T0_im: {
    long param1;
    extern void op_movl_T0_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_im+0), 12);
    *(uint32_t *)(gen_code_ptr + 12 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_addl_T0_im: {
    long param1;
    extern void op_addl_T0_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T0_im+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_andl_T0_ffff: {
    extern void op_andl_T0_ffff();
    memcpy(gen_code_ptr, (void *)((char *)&op_andl_T0_ffff+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_andl_T0_im: {
    long param1;
    extern void op_andl_T0_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_andl_T0_im+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movl_T0_T1: {
    extern void op_movl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T1_imu: {
    long param1;
    extern void op_movl_T1_imu();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_imu+0), 12);
    *(uint32_t *)(gen_code_ptr + 12 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_movl_T1_im: {
    long param1;
    extern void op_movl_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_im+0), 12);
    *(uint32_t *)(gen_code_ptr + 12 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_addl_T1_im: {
    long param1;
    extern void op_addl_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T1_im+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movl_T1_A0: {
    extern void op_movl_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_A0_im: {
    long param1;
    extern void op_movl_A0_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_im+0), 12);
    *(uint32_t *)(gen_code_ptr + 12 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_addl_A0_im: {
    long param1;
    extern void op_addl_A0_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_im+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movl_A0_seg: {
    long param1;
    extern void op_movl_A0_seg();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_A0_seg+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_addl_A0_seg: {
    long param1;
    extern void op_addl_A0_seg();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_seg+0), 20);
    *(uint32_t *)(gen_code_ptr + 20 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = param1 + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_addl_A0_AL: {
    extern void op_addl_A0_AL();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_AL+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_andl_A0_ffff: {
    extern void op_andl_A0_ffff();
    memcpy(gen_code_ptr, (void *)((char *)&op_andl_A0_ffff+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_ldub_raw_T0_A0: {
    extern void op_ldub_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldub_raw_T0_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_ldsb_raw_T0_A0: {
    extern void op_ldsb_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsb_raw_T0_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_lduw_raw_T0_A0: {
    extern void op_lduw_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_lduw_raw_T0_A0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_ldsw_raw_T0_A0: {
    extern void op_ldsw_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsw_raw_T0_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_ldl_raw_T0_A0: {
    extern void op_ldl_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldl_raw_T0_A0+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_ldub_raw_T1_A0: {
    extern void op_ldub_raw_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldub_raw_T1_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_ldsb_raw_T1_A0: {
    extern void op_ldsb_raw_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsb_raw_T1_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_lduw_raw_T1_A0: {
    extern void op_lduw_raw_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_lduw_raw_T1_A0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_ldsw_raw_T1_A0: {
    extern void op_ldsw_raw_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsw_raw_T1_A0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_ldl_raw_T1_A0: {
    extern void op_ldl_raw_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldl_raw_T1_A0+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_stb_raw_T0_A0: {
    extern void op_stb_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_stb_raw_T0_A0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_stw_raw_T0_A0: {
    extern void op_stw_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_raw_T0_A0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_stl_raw_T0_A0: {
    extern void op_stl_raw_T0_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_stl_raw_T0_A0+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_stw_raw_T1_A0: {
    extern void op_stw_raw_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_raw_T1_A0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_stl_raw_T1_A0: {
    extern void op_stl_raw_T1_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_stl_raw_T1_A0+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_ldq_raw_env_A0: {
    long param1;
    extern void op_ldq_raw_env_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldq_raw_env_A0+0), 120);
    *(uint32_t *)(gen_code_ptr + 120 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    gen_code_ptr += 120;
}
break;

case INDEX_op_stq_raw_env_A0: {
    long param1;
    extern void op_stq_raw_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_stq_raw_env_A0+0), 124);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 120) = param1 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_ldo_raw_env_A0: {
    long param1;
    extern void op_ldo_raw_env_A0();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldo_raw_env_A0+0), 228);
    *(uint32_t *)(gen_code_ptr + 228 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 224) = param1 + 0;
    gen_code_ptr += 228;
}
break;

case INDEX_op_sto_raw_env_A0: {
    long param1;
    extern void op_sto_raw_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF39;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sto_raw_env_A0+0), 232);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 228) = param1 + 0;
    gen_code_ptr += 232;
}
break;

case INDEX_op_ldub_kernel_T0_A0: {
    extern void op_ldub_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldub_kernel_T0_A0)+0), 84); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 84 - 8) = 0xEA000000;
    gen_code_ptr += 84;
}
break;

case INDEX_op_ldsb_kernel_T0_A0: {
    extern void op_ldsb_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsb_kernel_T0_A0)+0), 88); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 88 - 8) = 0xEA000000;
    gen_code_ptr += 88;
}
break;

case INDEX_op_lduw_kernel_T0_A0: {
    extern void op_lduw_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lduw_kernel_T0_A0)+0), 144); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 144 - 12) = 0xEA000001;
    gen_code_ptr += 144;
}
break;

case INDEX_op_ldsw_kernel_T0_A0: {
    extern void op_ldsw_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsw_kernel_T0_A0)+0), 152); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 152 - 12) = 0xEA000001;
    gen_code_ptr += 152;
}
break;

case INDEX_op_ldl_kernel_T0_A0: {
    extern void op_ldl_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldl_kernel_T0_A0)+0), 160); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 160 - 12) = 0xEA000001;
    gen_code_ptr += 160;
}
break;

case INDEX_op_ldub_kernel_T1_A0: {
    extern void op_ldub_kernel_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldub_kernel_T1_A0)+0), 84); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 84 - 8) = 0xEA000000;
    gen_code_ptr += 84;
}
break;

case INDEX_op_ldsb_kernel_T1_A0: {
    extern void op_ldsb_kernel_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsb_kernel_T1_A0)+0), 88); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 88 - 8) = 0xEA000000;
    gen_code_ptr += 88;
}
break;

case INDEX_op_lduw_kernel_T1_A0: {
    extern void op_lduw_kernel_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lduw_kernel_T1_A0)+0), 144); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 144 - 12) = 0xEA000001;
    gen_code_ptr += 144;
}
break;

case INDEX_op_ldsw_kernel_T1_A0: {
    extern void op_ldsw_kernel_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsw_kernel_T1_A0)+0), 152); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 152 - 12) = 0xEA000001;
    gen_code_ptr += 152;
}
break;

case INDEX_op_ldl_kernel_T1_A0: {
    extern void op_ldl_kernel_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldl_kernel_T1_A0)+0), 160); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 160 - 12) = 0xEA000001;
    gen_code_ptr += 160;
}
break;

case INDEX_op_stb_kernel_T0_A0: {
    extern void op_stb_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stb_kernel_T0_A0)+0), 84); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 84 - 8) = 0xEA000000;
    gen_code_ptr += 84;
}
break;

case INDEX_op_stw_kernel_T0_A0: {
    extern void op_stw_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stw_kernel_T0_A0)+0), 88); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 88 - 8) = 0xEA000000;
    gen_code_ptr += 88;
}
break;

case INDEX_op_stl_kernel_T0_A0: {
    extern void op_stl_kernel_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stl_kernel_T0_A0)+0), 80); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 80 - 8) = 0xEA000000;
    gen_code_ptr += 80;
}
break;

case INDEX_op_stw_kernel_T1_A0: {
    extern void op_stw_kernel_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stw_kernel_T1_A0)+0), 88); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 88 - 8) = 0xEA000000;
    gen_code_ptr += 88;
}
break;

case INDEX_op_stl_kernel_T1_A0: {
    extern void op_stl_kernel_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stl_kernel_T1_A0)+0), 80); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 80 - 8) = 0xEA000000;
    gen_code_ptr += 80;
}
break;

case INDEX_op_ldq_kernel_env_A0: {
    long param1;
    extern void op_ldq_kernel_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF48;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldq_kernel_env_A0+0), 292);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 280) = param1 + 0;
    gen_code_ptr += 292;
}
break;

case INDEX_op_stq_kernel_env_A0: {
    long param1;
    extern void op_stq_kernel_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_stq_kernel_env_A0+0), 136);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 128) = param1 + 0;
    gen_code_ptr += 136;
}
break;

case INDEX_op_ldo_kernel_env_A0: {
    long param1;
    extern void op_ldo_kernel_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF88;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldo_kernel_env_A0+0), 548);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 536) = param1 + 0;
    gen_code_ptr += 548;
}
break;

case INDEX_op_sto_kernel_env_A0: {
    long param1;
    extern void op_sto_kernel_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF40;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sto_kernel_env_A0+0), 260);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 252) = param1 + 0;
    gen_code_ptr += 260;
}
break;

case INDEX_op_ldub_user_T0_A0: {
    extern void op_ldub_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldub_user_T0_A0)+0), 84); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 84 - 8) = 0xEA000000;
    gen_code_ptr += 84;
}
break;

case INDEX_op_ldsb_user_T0_A0: {
    extern void op_ldsb_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsb_user_T0_A0)+0), 88); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 88 - 8) = 0xEA000000;
    gen_code_ptr += 88;
}
break;

case INDEX_op_lduw_user_T0_A0: {
    extern void op_lduw_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lduw_user_T0_A0)+0), 144); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 144 - 12) = 0xEA000001;
    gen_code_ptr += 144;
}
break;

case INDEX_op_ldsw_user_T0_A0: {
    extern void op_ldsw_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsw_user_T0_A0)+0), 152); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 152 - 12) = 0xEA000001;
    gen_code_ptr += 152;
}
break;

case INDEX_op_ldl_user_T0_A0: {
    extern void op_ldl_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldl_user_T0_A0)+0), 160); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 160 - 12) = 0xEA000001;
    gen_code_ptr += 160;
}
break;

case INDEX_op_ldub_user_T1_A0: {
    extern void op_ldub_user_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldub_user_T1_A0)+0), 84); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 84 - 8) = 0xEA000000;
    gen_code_ptr += 84;
}
break;

case INDEX_op_ldsb_user_T1_A0: {
    extern void op_ldsb_user_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsb_user_T1_A0)+0), 88); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 88 - 8) = 0xEA000000;
    gen_code_ptr += 88;
}
break;

case INDEX_op_lduw_user_T1_A0: {
    extern void op_lduw_user_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lduw_user_T1_A0)+0), 144); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 144 - 12) = 0xEA000001;
    gen_code_ptr += 144;
}
break;

case INDEX_op_ldsw_user_T1_A0: {
    extern void op_ldsw_user_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldsw_user_T1_A0)+0), 152); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 152 - 12) = 0xEA000001;
    gen_code_ptr += 152;
}
break;

case INDEX_op_ldl_user_T1_A0: {
    extern void op_ldl_user_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ldl_user_T1_A0)+0), 160); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 160 - 12) = 0xEA000001;
    gen_code_ptr += 160;
}
break;

case INDEX_op_stb_user_T0_A0: {
    extern void op_stb_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stb_user_T0_A0)+0), 88); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 88 - 8) = 0xEA000000;
    gen_code_ptr += 88;
}
break;

case INDEX_op_stw_user_T0_A0: {
    extern void op_stw_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stw_user_T0_A0)+0), 92); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 92 - 8) = 0xEA000000;
    gen_code_ptr += 92;
}
break;

case INDEX_op_stl_user_T0_A0: {
    extern void op_stl_user_T0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stl_user_T0_A0)+0), 84); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 84 - 8) = 0xEA000000;
    gen_code_ptr += 84;
}
break;

case INDEX_op_stw_user_T1_A0: {
    extern void op_stw_user_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stw_user_T1_A0)+0), 92); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 92 - 8) = 0xEA000000;
    gen_code_ptr += 92;
}
break;

case INDEX_op_stl_user_T1_A0: {
    extern void op_stl_user_T1_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stl_user_T1_A0)+0), 84); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 84 - 8) = 0xEA000000;
    gen_code_ptr += 84;
}
break;

case INDEX_op_ldq_user_env_A0: {
    long param1;
    extern void op_ldq_user_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF48;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldq_user_env_A0+0), 292);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 280) = param1 + 0;
    gen_code_ptr += 292;
}
break;

case INDEX_op_stq_user_env_A0: {
    long param1;
    extern void op_stq_user_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_stq_user_env_A0+0), 140);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 132) = param1 + 0;
    gen_code_ptr += 140;
}
break;

case INDEX_op_ldo_user_env_A0: {
    long param1;
    extern void op_ldo_user_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF88;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldo_user_env_A0+0), 548);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 536) = param1 + 0;
    gen_code_ptr += 548;
}
break;

case INDEX_op_sto_user_env_A0: {
    long param1;
    extern void op_sto_user_env_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF42;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sto_user_env_A0+0), 268);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 260) = param1 + 0;
    gen_code_ptr += 268;
}
break;

case INDEX_op_jmp_T0: {
    extern void op_jmp_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_T0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_eip_im: {
    long param1;
    extern void op_movl_eip_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_eip_im+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_hlt: {
    extern void op_hlt();
    memcpy(gen_code_ptr, (void *)(((char *)&op_hlt)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_monitor: {
    extern void op_monitor();
    memcpy(gen_code_ptr, (void *)(((char *)&op_monitor)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_mwait: {
    extern void op_mwait();
    memcpy(gen_code_ptr, (void *)(((char *)&op_mwait)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_debug: {
    extern void op_debug();
    memcpy(gen_code_ptr, (void *)(((char *)&op_debug)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    gen_code_ptr += 36;
}
break;

case INDEX_op_hook: {
    long param1;
    extern void op_hook();
    memcpy(gen_code_ptr, (void *)(((char *)&op_hook)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_raise_interrupt: {
    long param1, param2;
    extern void op_raise_interrupt();
    memcpy(gen_code_ptr, (void *)(((char *)&op_raise_interrupt)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 36) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 40) = param2 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_raise_exception: {
    long param1;
    extern void op_raise_exception();
    memcpy(gen_code_ptr, (void *)(((char *)&op_raise_exception)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_into: {
    long param1;
    extern void op_into();
    memcpy(gen_code_ptr, (void *)(((char *)&op_into)+0), 68); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 68 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_cli: {
    extern void op_cli();
    memcpy(gen_code_ptr, (void *)((char *)&op_cli+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_sti: {
    extern void op_sti();
    memcpy(gen_code_ptr, (void *)((char *)&op_sti+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_set_inhibit_irq: {
    extern void op_set_inhibit_irq();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_inhibit_irq+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_reset_inhibit_irq: {
    extern void op_reset_inhibit_irq();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_inhibit_irq+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_rsm: {
    extern void op_rsm();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rsm)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_boundw: {
    extern void op_boundw();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF6A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_boundw+0), 428);
    gen_code_ptr += 428;
}
break;

case INDEX_op_boundl: {
    extern void op_boundl();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF6C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_boundl+0), 436);
    gen_code_ptr += 436;
}
break;

case INDEX_op_cmpxchg8b: {
    extern void op_cmpxchg8b();
    memcpy(gen_code_ptr, (void *)(((char *)&op_cmpxchg8b)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_single_step: {
    extern void op_single_step();
    memcpy(gen_code_ptr, (void *)(((char *)&op_single_step)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_movl_T0_0: {
    extern void op_movl_T0_0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_0+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_exit_tb: {
    extern void op_exit_tb();
    memcpy(gen_code_ptr, (void *)((char *)&op_exit_tb+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_jb_subb: {
    long param1;
    extern void op_jb_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_jb_subb+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_jz_subb: {
    long param1;
    extern void op_jz_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_subb+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jnz_subb: {
    long param1;
    extern void op_jnz_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_subb+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jbe_subb: {
    long param1;
    extern void op_jbe_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_jbe_subb+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_js_subb: {
    long param1;
    extern void op_js_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_js_subb+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jl_subb: {
    long param1;
    extern void op_jl_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_jl_subb+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_jle_subb: {
    long param1;
    extern void op_jle_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_jle_subb+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_setb_T0_subb: {
    extern void op_setb_T0_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_setb_T0_subb+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_setz_T0_subb: {
    extern void op_setz_T0_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_setz_T0_subb+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_setbe_T0_subb: {
    extern void op_setbe_T0_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_setbe_T0_subb+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_sets_T0_subb: {
    extern void op_sets_T0_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_sets_T0_subb+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_setl_T0_subb: {
    extern void op_setl_T0_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_setl_T0_subb+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_setle_T0_subb: {
    extern void op_setle_T0_subb();
    memcpy(gen_code_ptr, (void *)((char *)&op_setle_T0_subb+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_shlb_T0_T1: {
    extern void op_shlb_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_shlb_T0_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_shrb_T0_T1: {
    extern void op_shrb_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrb_T0_T1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_sarb_T0_T1: {
    extern void op_sarb_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarb_T0_T1+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_rolb_T0_T1_cc: {
    extern void op_rolb_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolb_T0_T1_cc+0), 108);
    gen_code_ptr += 108;
}
break;

case INDEX_op_rorb_T0_T1_cc: {
    extern void op_rorb_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorb_T0_T1_cc+0), 112);
    gen_code_ptr += 112;
}
break;

case INDEX_op_rolb_T0_T1: {
    extern void op_rolb_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rolb_T0_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_rorb_T0_T1: {
    extern void op_rorb_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorb_T0_T1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_rclb_T0_T1_cc: {
    extern void op_rclb_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclb_T0_T1_cc+0), 160);
    gen_code_ptr += 160;
}
break;

case INDEX_op_rcrb_T0_T1_cc: {
    extern void op_rcrb_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrb_T0_T1_cc+0), 160);
    gen_code_ptr += 160;
}
break;

case INDEX_op_shlb_T0_T1_cc: {
    extern void op_shlb_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shlb_T0_T1_cc+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_shrb_T0_T1_cc: {
    extern void op_shrb_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrb_T0_T1_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_sarb_T0_T1_cc: {
    extern void op_sarb_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarb_T0_T1_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_adcb_T0_T1_cc: {
    extern void op_adcb_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_adcb_T0_T1_cc)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 8) = 0xEA000000;
    gen_code_ptr += 52;
}
break;

case INDEX_op_sbbb_T0_T1_cc: {
    extern void op_sbbb_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sbbb_T0_T1_cc)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 8) = 0xEA000000;
    gen_code_ptr += 52;
}
break;

case INDEX_op_cmpxchgb_T0_T1_EAX_cc: {
    extern void op_cmpxchgb_T0_T1_EAX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgb_T0_T1_EAX_cc+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_rolb_raw_T0_T1_cc: {
    extern void op_rolb_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolb_raw_T0_T1_cc+0), 112);
    gen_code_ptr += 112;
}
break;

case INDEX_op_rorb_raw_T0_T1_cc: {
    extern void op_rorb_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorb_raw_T0_T1_cc+0), 116);
    gen_code_ptr += 116;
}
break;

case INDEX_op_rolb_raw_T0_T1: {
    extern void op_rolb_raw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rolb_raw_T0_T1+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_rorb_raw_T0_T1: {
    extern void op_rorb_raw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorb_raw_T0_T1+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_rclb_raw_T0_T1_cc: {
    extern void op_rclb_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclb_raw_T0_T1_cc+0), 164);
    gen_code_ptr += 164;
}
break;

case INDEX_op_rcrb_raw_T0_T1_cc: {
    extern void op_rcrb_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrb_raw_T0_T1_cc+0), 164);
    gen_code_ptr += 164;
}
break;

case INDEX_op_shlb_raw_T0_T1_cc: {
    extern void op_shlb_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shlb_raw_T0_T1_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_shrb_raw_T0_T1_cc: {
    extern void op_shrb_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrb_raw_T0_T1_cc+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_sarb_raw_T0_T1_cc: {
    extern void op_sarb_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarb_raw_T0_T1_cc+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_adcb_raw_T0_T1_cc: {
    extern void op_adcb_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_adcb_raw_T0_T1_cc)+0), 56); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    gen_code_ptr += 56;
}
break;

case INDEX_op_sbbb_raw_T0_T1_cc: {
    extern void op_sbbb_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sbbb_raw_T0_T1_cc)+0), 56); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    gen_code_ptr += 56;
}
break;

case INDEX_op_cmpxchgb_raw_T0_T1_EAX_cc: {
    extern void op_cmpxchgb_raw_T0_T1_EAX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgb_raw_T0_T1_EAX_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_rolb_kernel_T0_T1_cc: {
    extern void op_rolb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolb_kernel_T0_T1_cc+0), 184);
    gen_code_ptr += 184;
}
break;

case INDEX_op_rorb_kernel_T0_T1_cc: {
    extern void op_rorb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorb_kernel_T0_T1_cc+0), 188);
    gen_code_ptr += 188;
}
break;

case INDEX_op_rolb_kernel_T0_T1: {
    extern void op_rolb_kernel_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rolb_kernel_T0_T1)+0), 108); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 108 - 8) = 0xEA000000;
    gen_code_ptr += 108;
}
break;

case INDEX_op_rorb_kernel_T0_T1: {
    extern void op_rorb_kernel_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rorb_kernel_T0_T1)+0), 108); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 108 - 8) = 0xEA000000;
    gen_code_ptr += 108;
}
break;

case INDEX_op_rclb_kernel_T0_T1_cc: {
    extern void op_rclb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclb_kernel_T0_T1_cc+0), 252);
    gen_code_ptr += 252;
}
break;

case INDEX_op_rcrb_kernel_T0_T1_cc: {
    extern void op_rcrb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrb_kernel_T0_T1_cc+0), 252);
    gen_code_ptr += 252;
}
break;

case INDEX_op_shlb_kernel_T0_T1_cc: {
    extern void op_shlb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shlb_kernel_T0_T1_cc+0), 136);
    gen_code_ptr += 136;
}
break;

case INDEX_op_shrb_kernel_T0_T1_cc: {
    extern void op_shrb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrb_kernel_T0_T1_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_sarb_kernel_T0_T1_cc: {
    extern void op_sarb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sarb_kernel_T0_T1_cc+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_adcb_kernel_T0_T1_cc: {
    extern void op_adcb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_adcb_kernel_T0_T1_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_sbbb_kernel_T0_T1_cc: {
    extern void op_sbbb_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sbbb_kernel_T0_T1_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_cmpxchgb_kernel_T0_T1_EAX_cc: {
    extern void op_cmpxchgb_kernel_T0_T1_EAX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgb_kernel_T0_T1_EAX_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_rolb_user_T0_T1_cc: {
    extern void op_rolb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolb_user_T0_T1_cc+0), 188);
    gen_code_ptr += 188;
}
break;

case INDEX_op_rorb_user_T0_T1_cc: {
    extern void op_rorb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorb_user_T0_T1_cc+0), 192);
    gen_code_ptr += 192;
}
break;

case INDEX_op_rolb_user_T0_T1: {
    extern void op_rolb_user_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rolb_user_T0_T1)+0), 112); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 112 - 8) = 0xEA000000;
    gen_code_ptr += 112;
}
break;

case INDEX_op_rorb_user_T0_T1: {
    extern void op_rorb_user_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rorb_user_T0_T1)+0), 112); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 112 - 8) = 0xEA000000;
    gen_code_ptr += 112;
}
break;

case INDEX_op_rclb_user_T0_T1_cc: {
    extern void op_rclb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclb_user_T0_T1_cc+0), 256);
    gen_code_ptr += 256;
}
break;

case INDEX_op_rcrb_user_T0_T1_cc: {
    extern void op_rcrb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrb_user_T0_T1_cc+0), 256);
    gen_code_ptr += 256;
}
break;

case INDEX_op_shlb_user_T0_T1_cc: {
    extern void op_shlb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shlb_user_T0_T1_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_shrb_user_T0_T1_cc: {
    extern void op_shrb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrb_user_T0_T1_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_sarb_user_T0_T1_cc: {
    extern void op_sarb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF25;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sarb_user_T0_T1_cc+0), 152);
    gen_code_ptr += 152;
}
break;

case INDEX_op_adcb_user_T0_T1_cc: {
    extern void op_adcb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_adcb_user_T0_T1_cc+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_sbbb_user_T0_T1_cc: {
    extern void op_sbbb_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sbbb_user_T0_T1_cc+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_cmpxchgb_user_T0_T1_EAX_cc: {
    extern void op_cmpxchgb_user_T0_T1_EAX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgb_user_T0_T1_EAX_cc+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_movl_T0_Dshiftb: {
    extern void op_movl_T0_Dshiftb();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_Dshiftb+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_outb_T0_T1: {
    extern void op_outb_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_outb_T0_T1)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_inb_T0_T1: {
    extern void op_inb_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_inb_T0_T1)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_inb_DX_T0: {
    extern void op_inb_DX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_inb_DX_T0)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_outb_DX_T0: {
    extern void op_outb_DX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_outb_DX_T0)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_check_iob_T0: {
    extern void op_check_iob_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_check_iob_T0)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    gen_code_ptr += 48;
}
break;

case INDEX_op_check_iob_DX: {
    extern void op_check_iob_DX();
    memcpy(gen_code_ptr, (void *)(((char *)&op_check_iob_DX)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    gen_code_ptr += 48;
}
break;

case INDEX_op_jb_subw: {
    long param1;
    extern void op_jb_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jb_subw+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_jz_subw: {
    long param1;
    extern void op_jz_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_subw+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jnz_subw: {
    long param1;
    extern void op_jnz_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_subw+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jbe_subw: {
    long param1;
    extern void op_jbe_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jbe_subw+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_js_subw: {
    long param1;
    extern void op_js_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_js_subw+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jl_subw: {
    long param1;
    extern void op_jl_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jl_subw+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_jle_subw: {
    long param1;
    extern void op_jle_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jle_subw+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = gen_labels[param1] + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_loopnzw: {
    long param1;
    extern void op_loopnzw();
    memcpy(gen_code_ptr, (void *)((char *)&op_loopnzw+0), 28);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = gen_labels[param1] + 0;
    gen_code_ptr += 28;
}
break;

case INDEX_op_loopzw: {
    long param1;
    extern void op_loopzw();
    memcpy(gen_code_ptr, (void *)((char *)&op_loopzw+0), 28);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = gen_labels[param1] + 0;
    gen_code_ptr += 28;
}
break;

case INDEX_op_jz_ecxw: {
    long param1;
    extern void op_jz_ecxw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_ecxw+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jnz_ecxw: {
    long param1;
    extern void op_jnz_ecxw();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_ecxw+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_setb_T0_subw: {
    extern void op_setb_T0_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_setb_T0_subw+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_setz_T0_subw: {
    extern void op_setz_T0_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_setz_T0_subw+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_setbe_T0_subw: {
    extern void op_setbe_T0_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_setbe_T0_subw+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_sets_T0_subw: {
    extern void op_sets_T0_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sets_T0_subw+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_setl_T0_subw: {
    extern void op_setl_T0_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_setl_T0_subw+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_setle_T0_subw: {
    extern void op_setle_T0_subw();
    memcpy(gen_code_ptr, (void *)((char *)&op_setle_T0_subw+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_shlw_T0_T1: {
    extern void op_shlw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_shlw_T0_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_shrw_T0_T1: {
    extern void op_shrw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrw_T0_T1+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_sarw_T0_T1: {
    extern void op_sarw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarw_T0_T1+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_rolw_T0_T1_cc: {
    extern void op_rolw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolw_T0_T1_cc+0), 112);
    gen_code_ptr += 112;
}
break;

case INDEX_op_rorw_T0_T1_cc: {
    extern void op_rorw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorw_T0_T1_cc+0), 116);
    gen_code_ptr += 116;
}
break;

case INDEX_op_rolw_T0_T1: {
    extern void op_rolw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rolw_T0_T1+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_rorw_T0_T1: {
    extern void op_rorw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorw_T0_T1+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_rclw_T0_T1_cc: {
    extern void op_rclw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclw_T0_T1_cc+0), 160);
    gen_code_ptr += 160;
}
break;

case INDEX_op_rcrw_T0_T1_cc: {
    extern void op_rcrw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrw_T0_T1_cc+0), 160);
    gen_code_ptr += 160;
}
break;

case INDEX_op_shlw_T0_T1_cc: {
    extern void op_shlw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shlw_T0_T1_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_shrw_T0_T1_cc: {
    extern void op_shrw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrw_T0_T1_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_sarw_T0_T1_cc: {
    extern void op_sarw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarw_T0_T1_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_shldw_T0_T1_im_cc: {
    long param1;
    extern void op_shldw_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_T0_T1_im_cc+0), 60);
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    gen_code_ptr += 60;
}
break;

case INDEX_op_shldw_T0_T1_ECX_cc: {
    extern void op_shldw_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_T0_T1_ECX_cc+0), 64);
    gen_code_ptr += 64;
}
break;

case INDEX_op_shrdw_T0_T1_im_cc: {
    long param1;
    extern void op_shrdw_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_T0_T1_im_cc+0), 60);
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    gen_code_ptr += 60;
}
break;

case INDEX_op_shrdw_T0_T1_ECX_cc: {
    extern void op_shrdw_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_T0_T1_ECX_cc+0), 64);
    gen_code_ptr += 64;
}
break;

case INDEX_op_adcw_T0_T1_cc: {
    extern void op_adcw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_adcw_T0_T1_cc)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 8) = 0xEA000000;
    gen_code_ptr += 52;
}
break;

case INDEX_op_sbbw_T0_T1_cc: {
    extern void op_sbbw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sbbw_T0_T1_cc)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 8) = 0xEA000000;
    gen_code_ptr += 52;
}
break;

case INDEX_op_cmpxchgw_T0_T1_EAX_cc: {
    extern void op_cmpxchgw_T0_T1_EAX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgw_T0_T1_EAX_cc+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_rolw_raw_T0_T1_cc: {
    extern void op_rolw_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolw_raw_T0_T1_cc+0), 128);
    gen_code_ptr += 128;
}
break;

case INDEX_op_rorw_raw_T0_T1_cc: {
    extern void op_rorw_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorw_raw_T0_T1_cc+0), 132);
    gen_code_ptr += 132;
}
break;

case INDEX_op_rolw_raw_T0_T1: {
    extern void op_rolw_raw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rolw_raw_T0_T1+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_rorw_raw_T0_T1: {
    extern void op_rorw_raw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorw_raw_T0_T1+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_rclw_raw_T0_T1_cc: {
    extern void op_rclw_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclw_raw_T0_T1_cc+0), 176);
    gen_code_ptr += 176;
}
break;

case INDEX_op_rcrw_raw_T0_T1_cc: {
    extern void op_rcrw_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrw_raw_T0_T1_cc+0), 176);
    gen_code_ptr += 176;
}
break;

case INDEX_op_shlw_raw_T0_T1_cc: {
    extern void op_shlw_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shlw_raw_T0_T1_cc+0), 56);
    gen_code_ptr += 56;
}
break;

case INDEX_op_shrw_raw_T0_T1_cc: {
    extern void op_shrw_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrw_raw_T0_T1_cc+0), 56);
    gen_code_ptr += 56;
}
break;

case INDEX_op_sarw_raw_T0_T1_cc: {
    extern void op_sarw_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarw_raw_T0_T1_cc+0), 56);
    gen_code_ptr += 56;
}
break;

case INDEX_op_shldw_raw_T0_T1_im_cc: {
    long param1;
    extern void op_shldw_raw_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_raw_T0_T1_im_cc+0), 76);
    *(uint32_t *)(gen_code_ptr + 76 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    gen_code_ptr += 76;
}
break;

case INDEX_op_shldw_raw_T0_T1_ECX_cc: {
    extern void op_shldw_raw_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_raw_T0_T1_ECX_cc+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_shrdw_raw_T0_T1_im_cc: {
    long param1;
    extern void op_shrdw_raw_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_raw_T0_T1_im_cc+0), 76);
    *(uint32_t *)(gen_code_ptr + 76 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    gen_code_ptr += 76;
}
break;

case INDEX_op_shrdw_raw_T0_T1_ECX_cc: {
    extern void op_shrdw_raw_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_raw_T0_T1_ECX_cc+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_adcw_raw_T0_T1_cc: {
    extern void op_adcw_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_adcw_raw_T0_T1_cc)+0), 68); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 68 - 8) = 0xEA000000;
    gen_code_ptr += 68;
}
break;

case INDEX_op_sbbw_raw_T0_T1_cc: {
    extern void op_sbbw_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sbbw_raw_T0_T1_cc)+0), 68); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 68 - 8) = 0xEA000000;
    gen_code_ptr += 68;
}
break;

case INDEX_op_cmpxchgw_raw_T0_T1_EAX_cc: {
    extern void op_cmpxchgw_raw_T0_T1_EAX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgw_raw_T0_T1_EAX_cc+0), 56);
    gen_code_ptr += 56;
}
break;

case INDEX_op_rolw_kernel_T0_T1_cc: {
    extern void op_rolw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolw_kernel_T0_T1_cc+0), 192);
    gen_code_ptr += 192;
}
break;

case INDEX_op_rorw_kernel_T0_T1_cc: {
    extern void op_rorw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF30;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorw_kernel_T0_T1_cc+0), 196);
    gen_code_ptr += 196;
}
break;

case INDEX_op_rolw_kernel_T0_T1: {
    extern void op_rolw_kernel_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rolw_kernel_T0_T1)+0), 116); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 116 - 8) = 0xEA000000;
    gen_code_ptr += 116;
}
break;

case INDEX_op_rorw_kernel_T0_T1: {
    extern void op_rorw_kernel_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rorw_kernel_T0_T1)+0), 116); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 116 - 8) = 0xEA000000;
    gen_code_ptr += 116;
}
break;

case INDEX_op_rclw_kernel_T0_T1_cc: {
    extern void op_rclw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclw_kernel_T0_T1_cc+0), 256);
    gen_code_ptr += 256;
}
break;

case INDEX_op_rcrw_kernel_T0_T1_cc: {
    extern void op_rcrw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrw_kernel_T0_T1_cc+0), 256);
    gen_code_ptr += 256;
}
break;

case INDEX_op_shlw_kernel_T0_T1_cc: {
    extern void op_shlw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF25;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shlw_kernel_T0_T1_cc+0), 152);
    gen_code_ptr += 152;
}
break;

case INDEX_op_shrw_kernel_T0_T1_cc: {
    extern void op_shrw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrw_kernel_T0_T1_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_sarw_kernel_T0_T1_cc: {
    extern void op_sarw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF25;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sarw_kernel_T0_T1_cc+0), 152);
    gen_code_ptr += 152;
}
break;

case INDEX_op_shldw_kernel_T0_T1_im_cc: {
    long param1;
    extern void op_shldw_kernel_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF25;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_kernel_T0_T1_im_cc+0), 152);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 144) = param1 + 0;
    gen_code_ptr += 152;
}
break;

case INDEX_op_shldw_kernel_T0_T1_ECX_cc: {
    extern void op_shldw_kernel_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_kernel_T0_T1_ECX_cc+0), 160);
    gen_code_ptr += 160;
}
break;

case INDEX_op_shrdw_kernel_T0_T1_im_cc: {
    long param1;
    extern void op_shrdw_kernel_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_kernel_T0_T1_im_cc+0), 160);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 152) = param1 + 0;
    gen_code_ptr += 160;
}
break;

case INDEX_op_shrdw_kernel_T0_T1_ECX_cc: {
    extern void op_shrdw_kernel_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF29;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_kernel_T0_T1_ECX_cc+0), 168);
    gen_code_ptr += 168;
}
break;

case INDEX_op_adcw_kernel_T0_T1_cc: {
    extern void op_adcw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_adcw_kernel_T0_T1_cc+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_sbbw_kernel_T0_T1_cc: {
    extern void op_sbbw_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sbbw_kernel_T0_T1_cc+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_cmpxchgw_kernel_T0_T1_EAX_cc: {
    extern void op_cmpxchgw_kernel_T0_T1_EAX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF26;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgw_kernel_T0_T1_EAX_cc+0), 156);
    gen_code_ptr += 156;
}
break;

case INDEX_op_rolw_user_T0_T1_cc: {
    extern void op_rolw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF30;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rolw_user_T0_T1_cc+0), 196);
    gen_code_ptr += 196;
}
break;

case INDEX_op_rorw_user_T0_T1_cc: {
    extern void op_rorw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF31;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorw_user_T0_T1_cc+0), 200);
    gen_code_ptr += 200;
}
break;

case INDEX_op_rolw_user_T0_T1: {
    extern void op_rolw_user_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rolw_user_T0_T1)+0), 120); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 120 - 8) = 0xEA000000;
    gen_code_ptr += 120;
}
break;

case INDEX_op_rorw_user_T0_T1: {
    extern void op_rorw_user_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rorw_user_T0_T1)+0), 120); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 120 - 8) = 0xEA000000;
    gen_code_ptr += 120;
}
break;

case INDEX_op_rclw_user_T0_T1_cc: {
    extern void op_rclw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF40;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rclw_user_T0_T1_cc+0), 260);
    gen_code_ptr += 260;
}
break;

case INDEX_op_rcrw_user_T0_T1_cc: {
    extern void op_rcrw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF40;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrw_user_T0_T1_cc+0), 260);
    gen_code_ptr += 260;
}
break;

case INDEX_op_shlw_user_T0_T1_cc: {
    extern void op_shlw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF26;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shlw_user_T0_T1_cc+0), 156);
    gen_code_ptr += 156;
}
break;

case INDEX_op_shrw_user_T0_T1_cc: {
    extern void op_shrw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrw_user_T0_T1_cc+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_sarw_user_T0_T1_cc: {
    extern void op_sarw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF26;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sarw_user_T0_T1_cc+0), 156);
    gen_code_ptr += 156;
}
break;

case INDEX_op_shldw_user_T0_T1_im_cc: {
    long param1;
    extern void op_shldw_user_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF26;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_user_T0_T1_im_cc+0), 156);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    gen_code_ptr += 156;
}
break;

case INDEX_op_shldw_user_T0_T1_ECX_cc: {
    extern void op_shldw_user_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldw_user_T0_T1_ECX_cc+0), 164);
    gen_code_ptr += 164;
}
break;

case INDEX_op_shrdw_user_T0_T1_im_cc: {
    long param1;
    extern void op_shrdw_user_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_user_T0_T1_im_cc+0), 164);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 156) = param1 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_shrdw_user_T0_T1_ECX_cc: {
    extern void op_shrdw_user_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdw_user_T0_T1_ECX_cc+0), 172);
    gen_code_ptr += 172;
}
break;

case INDEX_op_adcw_user_T0_T1_cc: {
    extern void op_adcw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF25;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_adcw_user_T0_T1_cc+0), 152);
    gen_code_ptr += 152;
}
break;

case INDEX_op_sbbw_user_T0_T1_cc: {
    extern void op_sbbw_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF25;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sbbw_user_T0_T1_cc+0), 152);
    gen_code_ptr += 152;
}
break;

case INDEX_op_cmpxchgw_user_T0_T1_EAX_cc: {
    extern void op_cmpxchgw_user_T0_T1_EAX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF26;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgw_user_T0_T1_EAX_cc+0), 156);
    gen_code_ptr += 156;
}
break;

case INDEX_op_btw_T0_T1_cc: {
    extern void op_btw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btw_T0_T1_cc+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_btsw_T0_T1_cc: {
    extern void op_btsw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btsw_T0_T1_cc+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_btrw_T0_T1_cc: {
    extern void op_btrw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btrw_T0_T1_cc+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_btcw_T0_T1_cc: {
    extern void op_btcw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btcw_T0_T1_cc+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_add_bitw_A0_T1: {
    extern void op_add_bitw_A0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_add_bitw_A0_T1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_bsfw_T0_cc: {
    extern void op_bsfw_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_bsfw_T0_cc+0), 60);
    gen_code_ptr += 60;
}
break;

case INDEX_op_bsrw_T0_cc: {
    extern void op_bsrw_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_bsrw_T0_cc+0), 60);
    gen_code_ptr += 60;
}
break;

case INDEX_op_movl_T0_Dshiftw: {
    extern void op_movl_T0_Dshiftw();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_Dshiftw+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_outw_T0_T1: {
    extern void op_outw_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_outw_T0_T1)+0), 64); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 64 - 8) = 0xEA000000;
    gen_code_ptr += 64;
}
break;

case INDEX_op_inw_T0_T1: {
    extern void op_inw_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_inw_T0_T1)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_inw_DX_T0: {
    extern void op_inw_DX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_inw_DX_T0)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_outw_DX_T0: {
    extern void op_outw_DX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_outw_DX_T0)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_check_iow_T0: {
    extern void op_check_iow_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_check_iow_T0)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    gen_code_ptr += 48;
}
break;

case INDEX_op_check_iow_DX: {
    extern void op_check_iow_DX();
    memcpy(gen_code_ptr, (void *)(((char *)&op_check_iow_DX)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    gen_code_ptr += 48;
}
break;

case INDEX_op_jb_subl: {
    long param1;
    extern void op_jb_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jb_subl+0), 32);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = gen_labels[param1] + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_jz_subl: {
    long param1;
    extern void op_jz_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_subl+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jnz_subl: {
    long param1;
    extern void op_jnz_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_subl+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jbe_subl: {
    long param1;
    extern void op_jbe_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jbe_subl+0), 32);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = gen_labels[param1] + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_js_subl: {
    long param1;
    extern void op_js_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_js_subl+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jl_subl: {
    long param1;
    extern void op_jl_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jl_subl+0), 32);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = gen_labels[param1] + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_jle_subl: {
    long param1;
    extern void op_jle_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jle_subl+0), 32);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = gen_labels[param1] + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_loopnzl: {
    long param1;
    extern void op_loopnzl();
    memcpy(gen_code_ptr, (void *)((char *)&op_loopnzl+0), 28);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = gen_labels[param1] + 0;
    gen_code_ptr += 28;
}
break;

case INDEX_op_loopzl: {
    long param1;
    extern void op_loopzl();
    memcpy(gen_code_ptr, (void *)((char *)&op_loopzl+0), 28);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = gen_labels[param1] + 0;
    gen_code_ptr += 28;
}
break;

case INDEX_op_jz_ecxl: {
    long param1;
    extern void op_jz_ecxl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_ecxl+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_jnz_ecxl: {
    long param1;
    extern void op_jnz_ecxl();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_ecxl+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = gen_labels[param1] + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_setb_T0_subl: {
    extern void op_setb_T0_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_setb_T0_subl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_setz_T0_subl: {
    extern void op_setz_T0_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_setz_T0_subl+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_setbe_T0_subl: {
    extern void op_setbe_T0_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_setbe_T0_subl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_sets_T0_subl: {
    extern void op_sets_T0_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_sets_T0_subl+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_setl_T0_subl: {
    extern void op_setl_T0_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_setl_T0_subl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_setle_T0_subl: {
    extern void op_setle_T0_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_setle_T0_subl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_shll_T0_T1: {
    extern void op_shll_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T0_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_shrl_T0_T1: {
    extern void op_shrl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T0_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_sarl_T0_T1: {
    extern void op_sarl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T0_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_roll_T0_T1_cc: {
    extern void op_roll_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_roll_T0_T1_cc+0), 100);
    gen_code_ptr += 100;
}
break;

case INDEX_op_rorl_T0_T1_cc: {
    extern void op_rorl_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF16;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_T0_T1_cc+0), 92);
    gen_code_ptr += 92;
}
break;

case INDEX_op_roll_T0_T1: {
    extern void op_roll_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_roll_T0_T1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_rorl_T0_T1: {
    extern void op_rorl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_T0_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_rcll_T0_T1_cc: {
    extern void op_rcll_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcll_T0_T1_cc+0), 136);
    gen_code_ptr += 136;
}
break;

case INDEX_op_rcrl_T0_T1_cc: {
    extern void op_rcrl_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrl_T0_T1_cc+0), 136);
    gen_code_ptr += 136;
}
break;

case INDEX_op_shll_T0_T1_cc: {
    extern void op_shll_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T0_T1_cc+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_shrl_T0_T1_cc: {
    extern void op_shrl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T0_T1_cc+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_sarl_T0_T1_cc: {
    extern void op_sarl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T0_T1_cc+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_shldl_T0_T1_im_cc: {
    long param1;
    extern void op_shldl_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_T0_T1_im_cc+0), 40);
    *(uint32_t *)(gen_code_ptr + 40 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 36) = param1 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_shldl_T0_T1_ECX_cc: {
    extern void op_shldl_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_T0_T1_ECX_cc+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_shrdl_T0_T1_im_cc: {
    long param1;
    extern void op_shrdl_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_T0_T1_im_cc+0), 40);
    *(uint32_t *)(gen_code_ptr + 40 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 36) = param1 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_shrdl_T0_T1_ECX_cc: {
    extern void op_shrdl_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_T0_T1_ECX_cc+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_adcl_T0_T1_cc: {
    extern void op_adcl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_adcl_T0_T1_cc)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 8) = 0xEA000000;
    gen_code_ptr += 52;
}
break;

case INDEX_op_sbbl_T0_T1_cc: {
    extern void op_sbbl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sbbl_T0_T1_cc)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 8) = 0xEA000000;
    gen_code_ptr += 52;
}
break;

case INDEX_op_cmpxchgl_T0_T1_EAX_cc: {
    extern void op_cmpxchgl_T0_T1_EAX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgl_T0_T1_EAX_cc+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_roll_raw_T0_T1_cc: {
    extern void op_roll_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_roll_raw_T0_T1_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_rorl_raw_T0_T1_cc: {
    extern void op_rorl_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_raw_T0_T1_cc+0), 132);
    gen_code_ptr += 132;
}
break;

case INDEX_op_roll_raw_T0_T1: {
    extern void op_roll_raw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_roll_raw_T0_T1+0), 56);
    gen_code_ptr += 56;
}
break;

case INDEX_op_rorl_raw_T0_T1: {
    extern void op_rorl_raw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_raw_T0_T1+0), 52);
    gen_code_ptr += 52;
}
break;

case INDEX_op_rcll_raw_T0_T1_cc: {
    extern void op_rcll_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcll_raw_T0_T1_cc+0), 176);
    gen_code_ptr += 176;
}
break;

case INDEX_op_rcrl_raw_T0_T1_cc: {
    extern void op_rcrl_raw_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrl_raw_T0_T1_cc+0), 176);
    gen_code_ptr += 176;
}
break;

case INDEX_op_shll_raw_T0_T1_cc: {
    extern void op_shll_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_raw_T0_T1_cc+0), 72);
    gen_code_ptr += 72;
}
break;

case INDEX_op_shrl_raw_T0_T1_cc: {
    extern void op_shrl_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_raw_T0_T1_cc+0), 72);
    gen_code_ptr += 72;
}
break;

case INDEX_op_sarl_raw_T0_T1_cc: {
    extern void op_sarl_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_raw_T0_T1_cc+0), 76);
    gen_code_ptr += 76;
}
break;

case INDEX_op_shldl_raw_T0_T1_im_cc: {
    long param1;
    extern void op_shldl_raw_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_raw_T0_T1_im_cc+0), 80);
    *(uint32_t *)(gen_code_ptr + 80 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 76) = param1 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_shldl_raw_T0_T1_ECX_cc: {
    extern void op_shldl_raw_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_raw_T0_T1_ECX_cc+0), 84);
    gen_code_ptr += 84;
}
break;

case INDEX_op_shrdl_raw_T0_T1_im_cc: {
    long param1;
    extern void op_shrdl_raw_T0_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_raw_T0_T1_im_cc+0), 80);
    *(uint32_t *)(gen_code_ptr + 80 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 76) = param1 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_shrdl_raw_T0_T1_ECX_cc: {
    extern void op_shrdl_raw_T0_T1_ECX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_raw_T0_T1_ECX_cc+0), 84);
    gen_code_ptr += 84;
}
break;

case INDEX_op_adcl_raw_T0_T1_cc: {
    extern void op_adcl_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_adcl_raw_T0_T1_cc)+0), 92); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 92 - 8) = 0xEA000000;
    gen_code_ptr += 92;
}
break;

case INDEX_op_sbbl_raw_T0_T1_cc: {
    extern void op_sbbl_raw_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sbbl_raw_T0_T1_cc)+0), 92); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 92 - 8) = 0xEA000000;
    gen_code_ptr += 92;
}
break;

case INDEX_op_cmpxchgl_raw_T0_T1_EAX_cc: {
    extern void op_cmpxchgl_raw_T0_T1_EAX_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgl_raw_T0_T1_EAX_cc+0), 68);
    gen_code_ptr += 68;
}
break;

case INDEX_op_roll_kernel_T0_T1_cc: {
    extern void op_roll_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_roll_kernel_T0_T1_cc+0), 172);
    gen_code_ptr += 172;
}
break;

case INDEX_op_rorl_kernel_T0_T1_cc: {
    extern void op_rorl_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_kernel_T0_T1_cc+0), 164);
    gen_code_ptr += 164;
}
break;

case INDEX_op_roll_kernel_T0_T1: {
    extern void op_roll_kernel_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_roll_kernel_T0_T1)+0), 96); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 96 - 8) = 0xEA000000;
    gen_code_ptr += 96;
}
break;

case INDEX_op_rorl_kernel_T0_T1: {
    extern void op_rorl_kernel_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rorl_kernel_T0_T1)+0), 92); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 92 - 8) = 0xEA000000;
    gen_code_ptr += 92;
}
break;

case INDEX_op_rcll_kernel_T0_T1_cc: {
    extern void op_rcll_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF37;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcll_kernel_T0_T1_cc+0), 224);
    gen_code_ptr += 224;
}
break;

case INDEX_op_rcrl_kernel_T0_T1_cc: {
    extern void op_rcrl_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF37;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrl_kernel_T0_T1_cc+0), 224);
    gen_code_ptr += 224;
}
break;

case INDEX_op_shll_kernel_T0_T1_cc: {
    extern void op_shll_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_kernel_T0_T1_cc+0), 128);
    gen_code_ptr += 128;
}
break;

case INDEX_op_shrl_kernel_T0_T1_cc: {
    extern void op_shrl_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_kernel_T0_T1_cc+0), 128);
    gen_code_ptr += 128;
}
break;

case INDEX_op_sarl_kernel_T0_T1_cc: {
    extern void op_sarl_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_kernel_T0_T1_cc+0), 136);
    gen_code_ptr += 136;
}
break;

case INDEX_op_shldl_kernel_T0_T1_im_cc: {
    long param1;
    extern void op_shldl_kernel_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_kernel_T0_T1_im_cc+0), 132);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 124) = param1 + 0;
    gen_code_ptr += 132;
}
break;

case INDEX_op_shldl_kernel_T0_T1_ECX_cc: {
    extern void op_shldl_kernel_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_kernel_T0_T1_ECX_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_shrdl_kernel_T0_T1_im_cc: {
    long param1;
    extern void op_shrdl_kernel_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_kernel_T0_T1_im_cc+0), 132);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 124) = param1 + 0;
    gen_code_ptr += 132;
}
break;

case INDEX_op_shrdl_kernel_T0_T1_ECX_cc: {
    extern void op_shrdl_kernel_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_kernel_T0_T1_ECX_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_adcl_kernel_T0_T1_cc: {
    extern void op_adcl_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_adcl_kernel_T0_T1_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_sbbl_kernel_T0_T1_cc: {
    extern void op_sbbl_kernel_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sbbl_kernel_T0_T1_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_cmpxchgl_kernel_T0_T1_EAX_cc: {
    extern void op_cmpxchgl_kernel_T0_T1_EAX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgl_kernel_T0_T1_EAX_cc+0), 128);
    gen_code_ptr += 128;
}
break;

case INDEX_op_roll_user_T0_T1_cc: {
    extern void op_roll_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_roll_user_T0_T1_cc+0), 176);
    gen_code_ptr += 176;
}
break;

case INDEX_op_rorl_user_T0_T1_cc: {
    extern void op_rorl_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF29;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_user_T0_T1_cc+0), 168);
    gen_code_ptr += 168;
}
break;

case INDEX_op_roll_user_T0_T1: {
    extern void op_roll_user_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_roll_user_T0_T1)+0), 100); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 100 - 8) = 0xEA000000;
    gen_code_ptr += 100;
}
break;

case INDEX_op_rorl_user_T0_T1: {
    extern void op_rorl_user_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rorl_user_T0_T1)+0), 96); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 96 - 8) = 0xEA000000;
    gen_code_ptr += 96;
}
break;

case INDEX_op_rcll_user_T0_T1_cc: {
    extern void op_rcll_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcll_user_T0_T1_cc+0), 228);
    gen_code_ptr += 228;
}
break;

case INDEX_op_rcrl_user_T0_T1_cc: {
    extern void op_rcrl_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcrl_user_T0_T1_cc+0), 228);
    gen_code_ptr += 228;
}
break;

case INDEX_op_shll_user_T0_T1_cc: {
    extern void op_shll_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_user_T0_T1_cc+0), 132);
    gen_code_ptr += 132;
}
break;

case INDEX_op_shrl_user_T0_T1_cc: {
    extern void op_shrl_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_user_T0_T1_cc+0), 132);
    gen_code_ptr += 132;
}
break;

case INDEX_op_sarl_user_T0_T1_cc: {
    extern void op_sarl_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_user_T0_T1_cc+0), 140);
    gen_code_ptr += 140;
}
break;

case INDEX_op_shldl_user_T0_T1_im_cc: {
    long param1;
    extern void op_shldl_user_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_user_T0_T1_im_cc+0), 136);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 128) = param1 + 0;
    gen_code_ptr += 136;
}
break;

case INDEX_op_shldl_user_T0_T1_ECX_cc: {
    extern void op_shldl_user_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shldl_user_T0_T1_ECX_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_shrdl_user_T0_T1_im_cc: {
    long param1;
    extern void op_shrdl_user_T0_T1_im_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_user_T0_T1_im_cc+0), 136);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 128) = param1 + 0;
    gen_code_ptr += 136;
}
break;

case INDEX_op_shrdl_user_T0_T1_ECX_cc: {
    extern void op_shrdl_user_T0_T1_ECX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shrdl_user_T0_T1_ECX_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_adcl_user_T0_T1_cc: {
    extern void op_adcl_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_adcl_user_T0_T1_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_sbbl_user_T0_T1_cc: {
    extern void op_sbbl_user_T0_T1_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF23;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sbbl_user_T0_T1_cc+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_cmpxchgl_user_T0_T1_EAX_cc: {
    extern void op_cmpxchgl_user_T0_T1_EAX_cc();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpxchgl_user_T0_T1_EAX_cc+0), 132);
    gen_code_ptr += 132;
}
break;

case INDEX_op_btl_T0_T1_cc: {
    extern void op_btl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btl_T0_T1_cc+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_btsl_T0_T1_cc: {
    extern void op_btsl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btsl_T0_T1_cc+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_btrl_T0_T1_cc: {
    extern void op_btrl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btrl_T0_T1_cc+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_btcl_T0_T1_cc: {
    extern void op_btcl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_btcl_T0_T1_cc+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_add_bitl_A0_T1: {
    extern void op_add_bitl_A0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_add_bitl_A0_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_bsfl_T0_cc: {
    extern void op_bsfl_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_bsfl_T0_cc+0), 56);
    gen_code_ptr += 56;
}
break;

case INDEX_op_bsrl_T0_cc: {
    extern void op_bsrl_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_bsrl_T0_cc+0), 48);
    gen_code_ptr += 48;
}
break;

case INDEX_op_update_bt_cc: {
    extern void op_update_bt_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_update_bt_cc+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_movl_T0_Dshiftl: {
    extern void op_movl_T0_Dshiftl();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_Dshiftl+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_outl_T0_T1: {
    extern void op_outl_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_outl_T0_T1)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_inl_T0_T1: {
    extern void op_inl_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_inl_T0_T1)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_inl_DX_T0: {
    extern void op_inl_DX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_inl_DX_T0)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_outl_DX_T0: {
    extern void op_outl_DX_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_outl_DX_T0)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 8) = 0xEA000000;
    gen_code_ptr += 60;
}
break;

case INDEX_op_check_iol_T0: {
    extern void op_check_iol_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_check_iol_T0)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    gen_code_ptr += 48;
}
break;

case INDEX_op_check_iol_DX: {
    extern void op_check_iol_DX();
    memcpy(gen_code_ptr, (void *)(((char *)&op_check_iol_DX)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    gen_code_ptr += 48;
}
break;

case INDEX_op_movsbl_T0_T0: {
    extern void op_movsbl_T0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movsbl_T0_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movzbl_T0_T0: {
    extern void op_movzbl_T0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movzbl_T0_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movswl_T0_T0: {
    extern void op_movswl_T0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movswl_T0_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movzwl_T0_T0: {
    extern void op_movzwl_T0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movzwl_T0_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movswl_EAX_AX: {
    extern void op_movswl_EAX_AX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movswl_EAX_AX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movsbw_AX_AL: {
    extern void op_movsbw_AX_AL();
    memcpy(gen_code_ptr, (void *)((char *)&op_movsbw_AX_AL+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_movslq_EDX_EAX: {
    extern void op_movslq_EDX_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movslq_EDX_EAX+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movswl_DX_AX: {
    extern void op_movswl_DX_AX();
    memcpy(gen_code_ptr, (void *)((char *)&op_movswl_DX_AX+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_addl_ESI_T0: {
    extern void op_addl_ESI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_ESI_T0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_addw_ESI_T0: {
    extern void op_addw_ESI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_addw_ESI_T0+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_addl_EDI_T0: {
    extern void op_addl_EDI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_EDI_T0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_addw_EDI_T0: {
    extern void op_addw_EDI_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_addw_EDI_T0+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_decl_ECX: {
    extern void op_decl_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_decl_ECX+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_decw_ECX: {
    extern void op_decw_ECX();
    memcpy(gen_code_ptr, (void *)((char *)&op_decw_ECX+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_addl_A0_SS: {
    extern void op_addl_A0_SS();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_A0_SS+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_subl_A0_2: {
    extern void op_subl_A0_2();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl_A0_2+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_subl_A0_4: {
    extern void op_subl_A0_4();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl_A0_4+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_ESP_4: {
    extern void op_addl_ESP_4();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_ESP_4+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addl_ESP_2: {
    extern void op_addl_ESP_2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_ESP_2+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_addw_ESP_4: {
    extern void op_addw_ESP_4();
    memcpy(gen_code_ptr, (void *)((char *)&op_addw_ESP_4+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_addw_ESP_2: {
    extern void op_addw_ESP_2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addw_ESP_2+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_addl_ESP_im: {
    long param1;
    extern void op_addl_ESP_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_ESP_im+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_addw_ESP_im: {
    long param1;
    extern void op_addw_ESP_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_addw_ESP_im+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_rdtsc: {
    extern void op_rdtsc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rdtsc)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_rdpmc: {
    extern void op_rdpmc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rdpmc)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_cpuid: {
    extern void op_cpuid();
    memcpy(gen_code_ptr, (void *)(((char *)&op_cpuid)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_enter_level: {
    long param1, param2;
    extern void op_enter_level();
    memcpy(gen_code_ptr, (void *)(((char *)&op_enter_level)+0), 40); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 40 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = param2 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_sysenter: {
    extern void op_sysenter();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sysenter)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_sysexit: {
    extern void op_sysexit();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sysexit)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_rdmsr: {
    extern void op_rdmsr();
    memcpy(gen_code_ptr, (void *)(((char *)&op_rdmsr)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_wrmsr: {
    extern void op_wrmsr();
    memcpy(gen_code_ptr, (void *)(((char *)&op_wrmsr)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_aam: {
    long param1;
    extern void op_aam();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF19;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_aam+0), 104);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 92) = param1 + 0;
    gen_code_ptr += 104;
}
break;

case INDEX_op_aad: {
    long param1;
    extern void op_aad();
    memcpy(gen_code_ptr, (void *)((char *)&op_aad+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_aaa: {
    extern void op_aaa();
    memcpy(gen_code_ptr, (void *)(((char *)&op_aaa)+0), 128); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 128 - 8) = 0xEA000000;
    gen_code_ptr += 128;
}
break;

case INDEX_op_aas: {
    extern void op_aas();
    memcpy(gen_code_ptr, (void *)(((char *)&op_aas)+0), 128); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 128 - 8) = 0xEA000000;
    gen_code_ptr += 128;
}
break;

case INDEX_op_daa: {
    extern void op_daa();
    memcpy(gen_code_ptr, (void *)(((char *)&op_daa)+0), 144); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 144 - 12) = 0xEA000001;
    gen_code_ptr += 144;
}
break;

case INDEX_op_das: {
    extern void op_das();
    memcpy(gen_code_ptr, (void *)(((char *)&op_das)+0), 172); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 172 - 12) = 0xEA000001;
    gen_code_ptr += 172;
}
break;

case INDEX_op_movl_seg_T0: {
    long param1;
    extern void op_movl_seg_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_movl_seg_T0)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_movl_seg_T0_vm: {
    long param1;
    extern void op_movl_seg_T0_vm();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_seg_T0_vm+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_movl_T0_seg: {
    long param1;
    extern void op_movl_T0_seg();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_seg+0), 20);
    *(uint32_t *)(gen_code_ptr + 20 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 16) = param1 + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_lsl: {
    extern void op_lsl();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lsl)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_lar: {
    extern void op_lar();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lar)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_verr: {
    extern void op_verr();
    memcpy(gen_code_ptr, (void *)(((char *)&op_verr)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_verw: {
    extern void op_verw();
    memcpy(gen_code_ptr, (void *)(((char *)&op_verw)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_arpl: {
    extern void op_arpl();
    memcpy(gen_code_ptr, (void *)((char *)&op_arpl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_arpl_update: {
    extern void op_arpl_update();
    memcpy(gen_code_ptr, (void *)(((char *)&op_arpl_update)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 8) = 0xEA000000;
    gen_code_ptr += 36;
}
break;

case INDEX_op_ljmp_protected_T0_T1: {
    long param1;
    extern void op_ljmp_protected_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ljmp_protected_T0_T1)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_lcall_real_T0_T1: {
    long param1, param2;
    extern void op_lcall_real_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lcall_real_T0_T1)+0), 40); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 40 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = param2 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_lcall_protected_T0_T1: {
    long param1, param2;
    extern void op_lcall_protected_T0_T1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lcall_protected_T0_T1)+0), 40); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 40 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = param2 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_iret_real: {
    long param1;
    extern void op_iret_real();
    memcpy(gen_code_ptr, (void *)(((char *)&op_iret_real)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_iret_protected: {
    long param1, param2;
    extern void op_iret_protected();
    memcpy(gen_code_ptr, (void *)(((char *)&op_iret_protected)+0), 40); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 40 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = param2 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_lret_protected: {
    long param1, param2;
    extern void op_lret_protected();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lret_protected)+0), 40); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 40 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = param2 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_lldt_T0: {
    extern void op_lldt_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lldt_T0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_ltr_T0: {
    extern void op_ltr_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ltr_T0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_movl_crN_T0: {
    long param1;
    extern void op_movl_crN_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_movl_crN_T0)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_svm_check_intercept: {
    long param1, param2;
    extern void op_svm_check_intercept();
    memcpy(gen_code_ptr, (void *)(((char *)&op_svm_check_intercept)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    gen_code_ptr += 52;
}
break;

case INDEX_op_svm_check_intercept_param: {
    long param1, param2;
    extern void op_svm_check_intercept_param();
    memcpy(gen_code_ptr, (void *)(((char *)&op_svm_check_intercept_param)+0), 52); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 52 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    gen_code_ptr += 52;
}
break;

case INDEX_op_svm_vmexit: {
    long param1, param2;
    extern void op_svm_vmexit();
    memcpy(gen_code_ptr, (void *)(((char *)&op_svm_vmexit)+0), 60); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 60 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 48) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 52) = param2 + 0;
    gen_code_ptr += 60;
}
break;

case INDEX_op_geneflags: {
    extern void op_geneflags();
    memcpy(gen_code_ptr, (void *)(((char *)&op_geneflags)+0), 28); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 28 - 8) = 0xEA000000;
    gen_code_ptr += 28;
}
break;

case INDEX_op_svm_check_intercept_io: {
    long param1, param2;
    extern void op_svm_check_intercept_io();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_svm_check_intercept_io+0), 180);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 164) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 168) = param2 + 0;
    gen_code_ptr += 180;
}
break;

case INDEX_op_movtl_T0_cr8: {
    extern void op_movtl_T0_cr8();
    memcpy(gen_code_ptr, (void *)(((char *)&op_movtl_T0_cr8)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 8) = 0xEA000000;
    gen_code_ptr += 36;
}
break;

case INDEX_op_movl_drN_T0: {
    long param1;
    extern void op_movl_drN_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_movl_drN_T0)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_lmsw_T0: {
    extern void op_lmsw_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lmsw_T0)+0), 44); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 44 - 8) = 0xEA000000;
    gen_code_ptr += 44;
}
break;

case INDEX_op_invlpg_A0: {
    extern void op_invlpg_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_invlpg_A0)+0), 28); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 28 - 8) = 0xEA000000;
    gen_code_ptr += 28;
}
break;

case INDEX_op_movl_T0_env: {
    long param1;
    extern void op_movl_T0_env();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_env+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movl_env_T0: {
    long param1;
    extern void op_movl_env_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_env_T0+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movl_env_T1: {
    long param1;
    extern void op_movl_env_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_env_T1+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movtl_T0_env: {
    long param1;
    extern void op_movtl_T0_env();
    memcpy(gen_code_ptr, (void *)((char *)&op_movtl_T0_env+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movtl_env_T0: {
    long param1;
    extern void op_movtl_env_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movtl_env_T0+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movtl_T1_env: {
    long param1;
    extern void op_movtl_T1_env();
    memcpy(gen_code_ptr, (void *)((char *)&op_movtl_T1_env+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_movtl_env_T1: {
    long param1;
    extern void op_movtl_env_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movtl_env_T1+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_clts: {
    extern void op_clts();
    memcpy(gen_code_ptr, (void *)((char *)&op_clts+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_goto_tb0: {
    extern void op_goto_tb0();
    memcpy(gen_code_ptr, (void *)((char *)&op_goto_tb0+0), 4);
    label_offsets[0] = 4 + (gen_code_ptr - gen_code_buf);
    jmp_offsets[0] = 0 + (gen_code_ptr - gen_code_buf);
    gen_code_ptr += 4;
}
break;

case INDEX_op_goto_tb1: {
    extern void op_goto_tb1();
    memcpy(gen_code_ptr, (void *)((char *)&op_goto_tb1+0), 4);
    label_offsets[1] = 4 + (gen_code_ptr - gen_code_buf);
    jmp_offsets[1] = 0 + (gen_code_ptr - gen_code_buf);
    gen_code_ptr += 4;
}
break;

case INDEX_op_jmp_label: {
    long param1;
    extern void op_jmp_label();
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_label+0), 8);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = gen_labels[param1] + 0;
    gen_code_ptr += 8;
}
break;

case INDEX_op_jnz_T0_label: {
    long param1;
    extern void op_jnz_T0_label();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_T0_label+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = gen_labels[param1] + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_jz_T0_label: {
    long param1;
    extern void op_jz_T0_label();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_T0_label+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = gen_labels[param1] + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_seto_T0_cc: {
    extern void op_seto_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_seto_T0_cc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_setb_T0_cc: {
    extern void op_setb_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_setb_T0_cc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_setz_T0_cc: {
    extern void op_setz_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_setz_T0_cc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_setbe_T0_cc: {
    extern void op_setbe_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_setbe_T0_cc)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 8) = 0xEA000000;
    gen_code_ptr += 36;
}
break;

case INDEX_op_sets_T0_cc: {
    extern void op_sets_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_sets_T0_cc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_setp_T0_cc: {
    extern void op_setp_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_setp_T0_cc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_setl_T0_cc: {
    extern void op_setl_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_setl_T0_cc)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 8) = 0xEA000000;
    gen_code_ptr += 36;
}
break;

case INDEX_op_setle_T0_cc: {
    extern void op_setle_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_setle_T0_cc)+0), 56); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    gen_code_ptr += 56;
}
break;

case INDEX_op_xor_T0_1: {
    extern void op_xor_T0_1();
    memcpy(gen_code_ptr, (void *)((char *)&op_xor_T0_1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_DYNAMIC: {
    extern void op_set_cc_op_CC_OP_DYNAMIC();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_DYNAMIC+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_EFLAGS: {
    extern void op_set_cc_op_CC_OP_EFLAGS();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_EFLAGS+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_MULB: {
    extern void op_set_cc_op_CC_OP_MULB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_MULB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_MULW: {
    extern void op_set_cc_op_CC_OP_MULW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_MULW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_MULL: {
    extern void op_set_cc_op_CC_OP_MULL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_MULL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_MULQ: {
    extern void op_set_cc_op_CC_OP_MULQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_MULQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADDB: {
    extern void op_set_cc_op_CC_OP_ADDB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADDB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADDW: {
    extern void op_set_cc_op_CC_OP_ADDW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADDW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADDL: {
    extern void op_set_cc_op_CC_OP_ADDL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADDL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADDQ: {
    extern void op_set_cc_op_CC_OP_ADDQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADDQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADCB: {
    extern void op_set_cc_op_CC_OP_ADCB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADCB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADCW: {
    extern void op_set_cc_op_CC_OP_ADCW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADCW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADCL: {
    extern void op_set_cc_op_CC_OP_ADCL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADCL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_ADCQ: {
    extern void op_set_cc_op_CC_OP_ADCQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_ADCQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SUBB: {
    extern void op_set_cc_op_CC_OP_SUBB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SUBB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SUBW: {
    extern void op_set_cc_op_CC_OP_SUBW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SUBW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SUBL: {
    extern void op_set_cc_op_CC_OP_SUBL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SUBL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SUBQ: {
    extern void op_set_cc_op_CC_OP_SUBQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SUBQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SBBB: {
    extern void op_set_cc_op_CC_OP_SBBB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SBBB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SBBW: {
    extern void op_set_cc_op_CC_OP_SBBW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SBBW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SBBL: {
    extern void op_set_cc_op_CC_OP_SBBL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SBBL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SBBQ: {
    extern void op_set_cc_op_CC_OP_SBBQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SBBQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_LOGICB: {
    extern void op_set_cc_op_CC_OP_LOGICB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_LOGICB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_LOGICW: {
    extern void op_set_cc_op_CC_OP_LOGICW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_LOGICW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_LOGICL: {
    extern void op_set_cc_op_CC_OP_LOGICL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_LOGICL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_LOGICQ: {
    extern void op_set_cc_op_CC_OP_LOGICQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_LOGICQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_INCB: {
    extern void op_set_cc_op_CC_OP_INCB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_INCB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_INCW: {
    extern void op_set_cc_op_CC_OP_INCW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_INCW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_INCL: {
    extern void op_set_cc_op_CC_OP_INCL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_INCL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_INCQ: {
    extern void op_set_cc_op_CC_OP_INCQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_INCQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_DECB: {
    extern void op_set_cc_op_CC_OP_DECB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_DECB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_DECW: {
    extern void op_set_cc_op_CC_OP_DECW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_DECW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_DECL: {
    extern void op_set_cc_op_CC_OP_DECL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_DECL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_DECQ: {
    extern void op_set_cc_op_CC_OP_DECQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_DECQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SHLB: {
    extern void op_set_cc_op_CC_OP_SHLB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SHLB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SHLW: {
    extern void op_set_cc_op_CC_OP_SHLW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SHLW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SHLL: {
    extern void op_set_cc_op_CC_OP_SHLL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SHLL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SHLQ: {
    extern void op_set_cc_op_CC_OP_SHLQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SHLQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SARB: {
    extern void op_set_cc_op_CC_OP_SARB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SARB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SARW: {
    extern void op_set_cc_op_CC_OP_SARW();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SARW+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SARL: {
    extern void op_set_cc_op_CC_OP_SARL();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SARL+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_SARQ: {
    extern void op_set_cc_op_CC_OP_SARQ();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_SARQ+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_set_cc_op_CC_OP_NB: {
    extern void op_set_cc_op_CC_OP_NB();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_cc_op_CC_OP_NB+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_mov_T0_cc: {
    extern void op_mov_T0_cc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_mov_T0_cc)+0), 28); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 28 - 8) = 0xEA000000;
    gen_code_ptr += 28;
}
break;

case INDEX_op_movl_eflags_T0: {
    extern void op_movl_eflags_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_eflags_T0+0), 64);
    *(uint32_t *)(gen_code_ptr + 64 - 12) = 0xEA000001;
    gen_code_ptr += 64;
}
break;

case INDEX_op_movw_eflags_T0: {
    extern void op_movw_eflags_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_eflags_T0+0), 56);
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    gen_code_ptr += 56;
}
break;

case INDEX_op_movl_eflags_T0_io: {
    extern void op_movl_eflags_T0_io();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_eflags_T0_io+0), 64);
    *(uint32_t *)(gen_code_ptr + 64 - 12) = 0xEA000001;
    gen_code_ptr += 64;
}
break;

case INDEX_op_movw_eflags_T0_io: {
    extern void op_movw_eflags_T0_io();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_eflags_T0_io+0), 56);
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    gen_code_ptr += 56;
}
break;

case INDEX_op_movl_eflags_T0_cpl0: {
    extern void op_movl_eflags_T0_cpl0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_eflags_T0_cpl0+0), 64);
    *(uint32_t *)(gen_code_ptr + 64 - 12) = 0xEA000001;
    gen_code_ptr += 64;
}
break;

case INDEX_op_movw_eflags_T0_cpl0: {
    extern void op_movw_eflags_T0_cpl0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movw_eflags_T0_cpl0+0), 56);
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    gen_code_ptr += 56;
}
break;

case INDEX_op_movb_eflags_T0: {
    extern void op_movb_eflags_T0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_movb_eflags_T0)+0), 40); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 40 - 8) = 0xEA000000;
    gen_code_ptr += 40;
}
break;

case INDEX_op_movl_T0_eflags: {
    extern void op_movl_T0_eflags();
    memcpy(gen_code_ptr, (void *)(((char *)&op_movl_T0_eflags)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    gen_code_ptr += 48;
}
break;

case INDEX_op_cld: {
    extern void op_cld();
    memcpy(gen_code_ptr, (void *)((char *)&op_cld+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_std: {
    extern void op_std();
    memcpy(gen_code_ptr, (void *)((char *)&op_std+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_clc: {
    extern void op_clc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_clc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_stc: {
    extern void op_stc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_cmc: {
    extern void op_cmc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_cmc)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_salc: {
    extern void op_salc();
    memcpy(gen_code_ptr, (void *)(((char *)&op_salc)+0), 44); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 44 - 8) = 0xEA000000;
    gen_code_ptr += 44;
}
break;

case INDEX_op_flds_FT0_A0: {
    extern void op_flds_FT0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_flds_FT0_A0+0), 236);
    gen_code_ptr += 236;
}
break;

case INDEX_op_fldl_FT0_A0: {
    extern void op_fldl_FT0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF52;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fldl_FT0_A0+0), 332);
    gen_code_ptr += 332;
}
break;

case INDEX_op_fild_FT0_A0: {
    extern void op_fild_FT0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fild_FT0_A0+0), 228);
    gen_code_ptr += 228;
}
break;

case INDEX_op_fildl_FT0_A0: {
    extern void op_fildl_FT0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF3A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fildl_FT0_A0+0), 236);
    gen_code_ptr += 236;
}
break;

case INDEX_op_fildll_FT0_A0: {
    extern void op_fildll_FT0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF54;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fildll_FT0_A0+0), 340);
    gen_code_ptr += 340;
}
break;

case INDEX_op_flds_ST0_A0: {
    extern void op_flds_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF46;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_flds_ST0_A0+0), 284);
    gen_code_ptr += 284;
}
break;

case INDEX_op_fldl_ST0_A0: {
    extern void op_fldl_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF5D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fldl_ST0_A0+0), 376);
    gen_code_ptr += 376;
}
break;

case INDEX_op_fldt_ST0_A0: {
    extern void op_fldt_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fldt_ST0_A0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fild_ST0_A0: {
    extern void op_fild_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF44;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fild_ST0_A0+0), 276);
    gen_code_ptr += 276;
}
break;

case INDEX_op_fildl_ST0_A0: {
    extern void op_fildl_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF46;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fildl_ST0_A0+0), 284);
    gen_code_ptr += 284;
}
break;

case INDEX_op_fildll_ST0_A0: {
    extern void op_fildll_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF60;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fildll_ST0_A0+0), 388);
    gen_code_ptr += 388;
}
break;

case INDEX_op_fsts_ST0_A0: {
    extern void op_fsts_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF24;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsts_ST0_A0+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_fstl_ST0_A0: {
    extern void op_fstl_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fstl_ST0_A0+0), 160);
    gen_code_ptr += 160;
}
break;

case INDEX_op_fstt_ST0_A0: {
    extern void op_fstt_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fstt_ST0_A0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fist_ST0_A0: {
    extern void op_fist_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fist_ST0_A0)+0), 172); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 172 - 16) = 0xEA000002;
    gen_code_ptr += 172;
}
break;

case INDEX_op_fistl_ST0_A0: {
    extern void op_fistl_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fistl_ST0_A0)+0), 140); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 140 - 12) = 0xEA000001;
    gen_code_ptr += 140;
}
break;

case INDEX_op_fistll_ST0_A0: {
    extern void op_fistll_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fistll_ST0_A0+0), 180);
    gen_code_ptr += 180;
}
break;

case INDEX_op_fistt_ST0_A0: {
    extern void op_fistt_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fistt_ST0_A0)+0), 172); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 172 - 16) = 0xEA000002;
    gen_code_ptr += 172;
}
break;

case INDEX_op_fisttl_ST0_A0: {
    extern void op_fisttl_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fisttl_ST0_A0)+0), 140); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 140 - 12) = 0xEA000001;
    gen_code_ptr += 140;
}
break;

case INDEX_op_fisttll_ST0_A0: {
    extern void op_fisttll_ST0_A0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fisttll_ST0_A0+0), 180);
    gen_code_ptr += 180;
}
break;

case INDEX_op_fbld_ST0_A0: {
    extern void op_fbld_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fbld_ST0_A0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fbst_ST0_A0: {
    extern void op_fbst_ST0_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fbst_ST0_A0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fpush: {
    extern void op_fpush();
    memcpy(gen_code_ptr, (void *)((char *)&op_fpush+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_fpop: {
    extern void op_fpop();
    memcpy(gen_code_ptr, (void *)((char *)&op_fpop+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_fdecstp: {
    extern void op_fdecstp();
    memcpy(gen_code_ptr, (void *)((char *)&op_fdecstp+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_fincstp: {
    extern void op_fincstp();
    memcpy(gen_code_ptr, (void *)((char *)&op_fincstp+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_ffree_STN: {
    long param1;
    extern void op_ffree_STN();
    memcpy(gen_code_ptr, (void *)((char *)&op_ffree_STN+0), 40);
    *(uint32_t *)(gen_code_ptr + 40 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 36) = param1 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_fmov_ST0_FT0: {
    extern void op_fmov_ST0_FT0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fmov_ST0_FT0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_fmov_FT0_STN: {
    long param1;
    extern void op_fmov_FT0_STN();
    memcpy(gen_code_ptr, (void *)((char *)&op_fmov_FT0_STN+0), 44);
    *(uint32_t *)(gen_code_ptr + 44 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    gen_code_ptr += 44;
}
break;

case INDEX_op_fmov_ST0_STN: {
    long param1;
    extern void op_fmov_ST0_STN();
    memcpy(gen_code_ptr, (void *)((char *)&op_fmov_ST0_STN+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_fmov_STN_ST0: {
    long param1;
    extern void op_fmov_STN_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fmov_STN_ST0+0), 52);
    *(uint32_t *)(gen_code_ptr + 52 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 48) = param1 + 0;
    gen_code_ptr += 52;
}
break;

case INDEX_op_fxchg_ST0_STN: {
    long param1;
    extern void op_fxchg_ST0_STN();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fxchg_ST0_STN+0), 108);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 104) = param1 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_fcom_ST0_FT0: {
    extern void op_fcom_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF17;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcom_ST0_FT0+0), 96);
    gen_code_ptr += 96;
}
break;

case INDEX_op_fucom_ST0_FT0: {
    extern void op_fucom_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF17;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fucom_ST0_FT0+0), 96);
    gen_code_ptr += 96;
}
break;

case INDEX_op_fcomi_ST0_FT0: {
    extern void op_fcomi_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcomi_ST0_FT0+0), 116);
    gen_code_ptr += 116;
}
break;

case INDEX_op_fucomi_ST0_FT0: {
    extern void op_fucomi_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fucomi_ST0_FT0+0), 116);
    gen_code_ptr += 116;
}
break;

case INDEX_op_fcmov_ST0_STN_T0: {
    long param1;
    extern void op_fcmov_ST0_STN_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fcmov_ST0_STN_T0+0), 56);
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 52) = param1 + 0;
    gen_code_ptr += 56;
}
break;

case INDEX_op_fadd_ST0_FT0: {
    extern void op_fadd_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fadd_ST0_FT0+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_fmul_ST0_FT0: {
    extern void op_fmul_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fmul_ST0_FT0+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_fsub_ST0_FT0: {
    extern void op_fsub_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsub_ST0_FT0+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_fsubr_ST0_FT0: {
    extern void op_fsubr_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsubr_ST0_FT0+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_fdiv_ST0_FT0: {
    extern void op_fdiv_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdiv_ST0_FT0+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_fdivr_ST0_FT0: {
    extern void op_fdivr_ST0_FT0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdivr_ST0_FT0+0), 80);
    gen_code_ptr += 80;
}
break;

case INDEX_op_fadd_STN_ST0: {
    long param1;
    extern void op_fadd_STN_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fadd_STN_ST0+0), 112);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 104) = param1 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_fmul_STN_ST0: {
    long param1;
    extern void op_fmul_STN_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fmul_STN_ST0+0), 112);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 104) = param1 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_fsub_STN_ST0: {
    long param1;
    extern void op_fsub_STN_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsub_STN_ST0+0), 112);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 104) = param1 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_fsubr_STN_ST0: {
    long param1;
    extern void op_fsubr_STN_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF17;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsubr_STN_ST0+0), 96);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    gen_code_ptr += 96;
}
break;

case INDEX_op_fdiv_STN_ST0: {
    long param1;
    extern void op_fdiv_STN_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF17;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdiv_STN_ST0+0), 96);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    gen_code_ptr += 96;
}
break;

case INDEX_op_fdivr_STN_ST0: {
    long param1;
    extern void op_fdivr_STN_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF17;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdivr_STN_ST0+0), 96);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    gen_code_ptr += 96;
}
break;

case INDEX_op_fchs_ST0: {
    extern void op_fchs_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fchs_ST0+0), 72);
    gen_code_ptr += 72;
}
break;

case INDEX_op_fabs_ST0: {
    extern void op_fabs_ST0();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fabs_ST0+0), 136);
    gen_code_ptr += 136;
}
break;

case INDEX_op_fxam_ST0: {
    extern void op_fxam_ST0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fxam_ST0)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fld1_ST0: {
    extern void op_fld1_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fld1_ST0+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fldl2t_ST0: {
    extern void op_fldl2t_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fldl2t_ST0+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fldl2e_ST0: {
    extern void op_fldl2e_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fldl2e_ST0+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fldpi_ST0: {
    extern void op_fldpi_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fldpi_ST0+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fldlg2_ST0: {
    extern void op_fldlg2_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fldlg2_ST0+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fldln2_ST0: {
    extern void op_fldln2_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fldln2_ST0+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fldz_ST0: {
    extern void op_fldz_ST0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fldz_ST0+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fldz_FT0: {
    extern void op_fldz_FT0();
    memcpy(gen_code_ptr, (void *)((char *)&op_fldz_FT0+0), 24);
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_f2xm1: {
    extern void op_f2xm1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_f2xm1)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fyl2x: {
    extern void op_fyl2x();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fyl2x)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fptan: {
    extern void op_fptan();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fptan)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fpatan: {
    extern void op_fpatan();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fpatan)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fxtract: {
    extern void op_fxtract();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fxtract)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fprem1: {
    extern void op_fprem1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fprem1)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fprem: {
    extern void op_fprem();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fprem)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fyl2xp1: {
    extern void op_fyl2xp1();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fyl2xp1)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fsqrt: {
    extern void op_fsqrt();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fsqrt)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fsincos: {
    extern void op_fsincos();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fsincos)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_frndint: {
    extern void op_frndint();
    memcpy(gen_code_ptr, (void *)(((char *)&op_frndint)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fscale: {
    extern void op_fscale();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fscale)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fsin: {
    extern void op_fsin();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fsin)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fcos: {
    extern void op_fcos();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fcos)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_fnstsw_A0: {
    extern void op_fnstsw_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fnstsw_A0)+0), 132); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 132 - 8) = 0xEA000000;
    gen_code_ptr += 132;
}
break;

case INDEX_op_fnstsw_EAX: {
    extern void op_fnstsw_EAX();
    memcpy(gen_code_ptr, (void *)((char *)&op_fnstsw_EAX+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_fnstcw_A0: {
    extern void op_fnstcw_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fnstcw_A0)+0), 116); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 116 - 8) = 0xEA000000;
    gen_code_ptr += 116;
}
break;

case INDEX_op_fldcw_A0: {
    extern void op_fldcw_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fldcw_A0)+0), 200); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 200 - 16) = 0xEA000002;
    gen_code_ptr += 200;
}
break;

case INDEX_op_fclex: {
    extern void op_fclex();
    memcpy(gen_code_ptr, (void *)((char *)&op_fclex+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_fwait: {
    extern void op_fwait();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fwait)+0), 32); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 32 - 8) = 0xEA000000;
    gen_code_ptr += 32;
}
break;

case INDEX_op_fninit: {
    extern void op_fninit();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_fninit+0), 120);
    gen_code_ptr += 120;
}
break;

case INDEX_op_fnstenv_A0: {
    long param1;
    extern void op_fnstenv_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fnstenv_A0)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_fldenv_A0: {
    long param1;
    extern void op_fldenv_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fldenv_A0)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_fnsave_A0: {
    long param1;
    extern void op_fnsave_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fnsave_A0)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_frstor_A0: {
    long param1;
    extern void op_frstor_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_frstor_A0)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_lock: {
    extern void op_lock();
    memcpy(gen_code_ptr, (void *)(((char *)&op_lock)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_unlock: {
    extern void op_unlock();
    memcpy(gen_code_ptr, (void *)(((char *)&op_unlock)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_movo: {
    long param1, param2;
    extern void op_movo();
    memcpy(gen_code_ptr, (void *)((char *)&op_movo+0), 52);
    *(uint32_t *)(gen_code_ptr + 52 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 44) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 48) = param1 + 0;
    gen_code_ptr += 52;
}
break;

case INDEX_op_movq: {
    long param1, param2;
    extern void op_movq();
    memcpy(gen_code_ptr, (void *)((char *)&op_movq+0), 36);
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = param2 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_movl: {
    long param1, param2;
    extern void op_movl();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl+0), 28);
    *(uint32_t *)(gen_code_ptr + 28 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 20) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    gen_code_ptr += 28;
}
break;

case INDEX_op_movq_env_0: {
    long param1;
    extern void op_movq_env_0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movq_env_0+0), 28);
    *(uint32_t *)(gen_code_ptr + 28 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    gen_code_ptr += 28;
}
break;

case INDEX_op_fxsave_A0: {
    long param1;
    extern void op_fxsave_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fxsave_A0)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_fxrstor_A0: {
    long param1;
    extern void op_fxrstor_A0();
    memcpy(gen_code_ptr, (void *)(((char *)&op_fxrstor_A0)+0), 36); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_enter_mmx: {
    extern void op_enter_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_enter_mmx+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_emms: {
    extern void op_emms();
    memcpy(gen_code_ptr, (void *)((char *)&op_emms+0), 20);
    *(uint32_t *)(gen_code_ptr + 20 - 8) = 0xEA000000;
    gen_code_ptr += 20;
}
break;

case INDEX_op_psrlw_mmx: {
    long param1, param2;
    extern void op_psrlw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psrlw_mmx+0), 124);
    *(uint32_t *)(gen_code_ptr + 124 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_psraw_mmx: {
    long param1, param2;
    extern void op_psraw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psraw_mmx+0), 116);
    *(uint32_t *)(gen_code_ptr + 116 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 108) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 112) = param2 + 0;
    gen_code_ptr += 116;
}
break;

case INDEX_op_psllw_mmx: {
    long param1, param2;
    extern void op_psllw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psllw_mmx+0), 124);
    *(uint32_t *)(gen_code_ptr + 124 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_psrld_mmx: {
    long param1, param2;
    extern void op_psrld_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psrld_mmx+0), 100);
    *(uint32_t *)(gen_code_ptr + 100 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 92) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 96) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_psrad_mmx: {
    long param1, param2;
    extern void op_psrad_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psrad_mmx+0), 92);
    *(uint32_t *)(gen_code_ptr + 92 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 84) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = param2 + 0;
    gen_code_ptr += 92;
}
break;

case INDEX_op_pslld_mmx: {
    long param1, param2;
    extern void op_pslld_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pslld_mmx+0), 100);
    *(uint32_t *)(gen_code_ptr + 100 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 92) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 96) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_psrlq_mmx: {
    long param1, param2;
    extern void op_psrlq_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_psrlq_mmx+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_psllq_mmx: {
    long param1, param2;
    extern void op_psllq_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_psllq_mmx+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_paddb_mmx: {
    long param1, param2;
    extern void op_paddb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddb_mmx+0), 148);
    *(uint32_t *)(gen_code_ptr + 148 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 140) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 144) = param2 + 0;
    gen_code_ptr += 148;
}
break;

case INDEX_op_paddw_mmx: {
    long param1, param2;
    extern void op_paddw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddw_mmx+0), 92);
    *(uint32_t *)(gen_code_ptr + 92 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 84) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = param2 + 0;
    gen_code_ptr += 92;
}
break;

case INDEX_op_paddl_mmx: {
    long param1, param2;
    extern void op_paddl_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddl_mmx+0), 52);
    *(uint32_t *)(gen_code_ptr + 52 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 48) = param2 + 0;
    gen_code_ptr += 52;
}
break;

case INDEX_op_paddq_mmx: {
    long param1, param2;
    extern void op_paddq_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddq_mmx+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param2 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_psubb_mmx: {
    long param1, param2;
    extern void op_psubb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubb_mmx+0), 148);
    *(uint32_t *)(gen_code_ptr + 148 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 140) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 144) = param2 + 0;
    gen_code_ptr += 148;
}
break;

case INDEX_op_psubw_mmx: {
    long param1, param2;
    extern void op_psubw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubw_mmx+0), 92);
    *(uint32_t *)(gen_code_ptr + 92 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 84) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = param2 + 0;
    gen_code_ptr += 92;
}
break;

case INDEX_op_psubl_mmx: {
    long param1, param2;
    extern void op_psubl_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubl_mmx+0), 52);
    *(uint32_t *)(gen_code_ptr + 52 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 48) = param2 + 0;
    gen_code_ptr += 52;
}
break;

case INDEX_op_psubq_mmx: {
    long param1, param2;
    extern void op_psubq_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubq_mmx+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param2 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_paddusb_mmx: {
    long param1, param2;
    extern void op_paddusb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddusb_mmx+0), 212);
    *(uint32_t *)(gen_code_ptr + 212 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 204) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 208) = param2 + 0;
    gen_code_ptr += 212;
}
break;

case INDEX_op_paddsb_mmx: {
    long param1, param2;
    extern void op_paddsb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddsb_mmx+0), 348);
    *(uint32_t *)(gen_code_ptr + 348 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 340) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 344) = param2 + 0;
    gen_code_ptr += 348;
}
break;

case INDEX_op_psubusb_mmx: {
    long param1, param2;
    extern void op_psubusb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubusb_mmx+0), 308);
    *(uint32_t *)(gen_code_ptr + 308 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 300) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 304) = param2 + 0;
    gen_code_ptr += 308;
}
break;

case INDEX_op_psubsb_mmx: {
    long param1, param2;
    extern void op_psubsb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubsb_mmx+0), 348);
    *(uint32_t *)(gen_code_ptr + 348 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 340) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 344) = param2 + 0;
    gen_code_ptr += 348;
}
break;

case INDEX_op_paddusw_mmx: {
    long param1, param2;
    extern void op_paddusw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddusw_mmx+0), 144);
    *(uint32_t *)(gen_code_ptr + 144 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 132) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 136) = param2 + 0;
    gen_code_ptr += 144;
}
break;

case INDEX_op_paddsw_mmx: {
    long param1, param2;
    extern void op_paddsw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddsw_mmx+0), 196);
    *(uint32_t *)(gen_code_ptr + 196 - 20) = 0xEA000003;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 180) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 184) = param2 + 0;
    gen_code_ptr += 196;
}
break;

case INDEX_op_psubusw_mmx: {
    long param1, param2;
    extern void op_psubusw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubusw_mmx+0), 176);
    *(uint32_t *)(gen_code_ptr + 176 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 164) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 168) = param2 + 0;
    gen_code_ptr += 176;
}
break;

case INDEX_op_psubsw_mmx: {
    long param1, param2;
    extern void op_psubsw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubsw_mmx+0), 196);
    *(uint32_t *)(gen_code_ptr + 196 - 20) = 0xEA000003;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 180) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 184) = param2 + 0;
    gen_code_ptr += 196;
}
break;

case INDEX_op_pminub_mmx: {
    long param1, param2;
    extern void op_pminub_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pminub_mmx+0), 180);
    *(uint32_t *)(gen_code_ptr + 180 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param1 + 0;
    gen_code_ptr += 180;
}
break;

case INDEX_op_pmaxub_mmx: {
    long param1, param2;
    extern void op_pmaxub_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmaxub_mmx+0), 180);
    *(uint32_t *)(gen_code_ptr + 180 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param1 + 0;
    gen_code_ptr += 180;
}
break;

case INDEX_op_pminsw_mmx: {
    long param1, param2;
    extern void op_pminsw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pminsw_mmx+0), 108);
    *(uint32_t *)(gen_code_ptr + 108 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_pmaxsw_mmx: {
    long param1, param2;
    extern void op_pmaxsw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmaxsw_mmx+0), 108);
    *(uint32_t *)(gen_code_ptr + 108 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_pand_mmx: {
    long param1, param2;
    extern void op_pand_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pand_mmx+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param2 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_pandn_mmx: {
    long param1, param2;
    extern void op_pandn_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pandn_mmx+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param2 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_por_mmx: {
    long param1, param2;
    extern void op_por_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_por_mmx+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param2 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_pxor_mmx: {
    long param1, param2;
    extern void op_pxor_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pxor_mmx+0), 48);
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = param2 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_pcmpgtb_mmx: {
    long param1, param2;
    extern void op_pcmpgtb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpgtb_mmx+0), 220);
    *(uint32_t *)(gen_code_ptr + 220 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 212) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 216) = param2 + 0;
    gen_code_ptr += 220;
}
break;

case INDEX_op_pcmpgtw_mmx: {
    long param1, param2;
    extern void op_pcmpgtw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpgtw_mmx+0), 124);
    *(uint32_t *)(gen_code_ptr + 124 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_pcmpgtl_mmx: {
    long param1, param2;
    extern void op_pcmpgtl_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpgtl_mmx+0), 68);
    *(uint32_t *)(gen_code_ptr + 68 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_pcmpeqb_mmx: {
    long param1, param2;
    extern void op_pcmpeqb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpeqb_mmx+0), 212);
    *(uint32_t *)(gen_code_ptr + 212 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 204) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 208) = param2 + 0;
    gen_code_ptr += 212;
}
break;

case INDEX_op_pcmpeqw_mmx: {
    long param1, param2;
    extern void op_pcmpeqw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpeqw_mmx+0), 124);
    *(uint32_t *)(gen_code_ptr + 124 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_pcmpeql_mmx: {
    long param1, param2;
    extern void op_pcmpeql_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpeql_mmx+0), 68);
    *(uint32_t *)(gen_code_ptr + 68 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_pmullw_mmx: {
    long param1, param2;
    extern void op_pmullw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmullw_mmx+0), 92);
    *(uint32_t *)(gen_code_ptr + 92 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 84) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = param2 + 0;
    gen_code_ptr += 92;
}
break;

case INDEX_op_pmulhuw_mmx: {
    long param1, param2;
    extern void op_pmulhuw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmulhuw_mmx+0), 108);
    *(uint32_t *)(gen_code_ptr + 108 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_pmulhw_mmx: {
    long param1, param2;
    extern void op_pmulhw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmulhw_mmx+0), 108);
    *(uint32_t *)(gen_code_ptr + 108 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_pavgb_mmx: {
    long param1, param2;
    extern void op_pavgb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pavgb_mmx+0), 212);
    *(uint32_t *)(gen_code_ptr + 212 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 204) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 208) = param2 + 0;
    gen_code_ptr += 212;
}
break;

case INDEX_op_pavgw_mmx: {
    long param1, param2;
    extern void op_pavgw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pavgw_mmx+0), 124);
    *(uint32_t *)(gen_code_ptr + 124 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_pmuludq_mmx: {
    long param1, param2;
    extern void op_pmuludq_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmuludq_mmx+0), 36);
    *(uint32_t *)(gen_code_ptr + 36 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_pmaddwd_mmx: {
    long param1, param2;
    extern void op_pmaddwd_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pmaddwd_mmx+0), 136);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 128) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 132) = param2 + 0;
    gen_code_ptr += 136;
}
break;

case INDEX_op_psadbw_mmx: {
    long param1, param2;
    extern void op_psadbw_mmx();
    memcpy(gen_code_ptr, (void *)(((char *)&op_psadbw_mmx)+0), 220); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 220 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 212) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 216) = param2 + 0;
    gen_code_ptr += 220;
}
break;

case INDEX_op_maskmov_mmx: {
    long param1, param2;
    extern void op_maskmov_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF33;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_maskmov_mmx+0), 208);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 196) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 200) = param2 + 0;
    gen_code_ptr += 208;
}
break;

case INDEX_op_movl_mm_T0_mmx: {
    long param1;
    extern void op_movl_mm_T0_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_mm_T0_mmx+0), 24);
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 20) = param1 + 0;
    gen_code_ptr += 24;
}
break;

case INDEX_op_movl_T0_mm_mmx: {
    long param1;
    extern void op_movl_T0_mm_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_mm_mmx+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_pshufw_mmx: {
    long param1, param2, param3;
    extern void op_pshufw_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pshufw_mmx+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 124) = param3 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_pmovmskb_mmx: {
    long param1;
    extern void op_pmovmskb_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmovmskb_mmx+0), 124);
    *(uint32_t *)(gen_code_ptr + 124 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 120) = param1 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_pinsrw_mmx: {
    long param1, param2;
    extern void op_pinsrw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pinsrw_mmx+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 28) = param2 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_pextrw_mmx: {
    long param1, param2;
    extern void op_pextrw_mmx();
    memcpy(gen_code_ptr, (void *)((char *)&op_pextrw_mmx+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 28) = param2 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_packsswb_mmx: {
    long param1, param2;
    extern void op_packsswb_mmx();
    memcpy(gen_code_ptr, (void *)(((char *)&op_packsswb_mmx)+0), 332); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 332 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 324) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 328) = param2 + 0;
    gen_code_ptr += 332;
}
break;

case INDEX_op_packuswb_mmx: {
    long param1, param2;
    extern void op_packuswb_mmx();
    memcpy(gen_code_ptr, (void *)(((char *)&op_packuswb_mmx)+0), 332); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 332 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 324) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 328) = param2 + 0;
    gen_code_ptr += 332;
}
break;

case INDEX_op_packssdw_mmx: {
    long param1, param2;
    extern void op_packssdw_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_packssdw_mmx+0), 188);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param1 + 0;
    gen_code_ptr += 188;
}
break;

case INDEX_op_punpcklbw_mmx: {
    long param1, param2;
    extern void op_punpcklbw_mmx();
    memcpy(gen_code_ptr, (void *)(((char *)&op_punpcklbw_mmx)+0), 124); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 124 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_punpcklwd_mmx: {
    long param1, param2;
    extern void op_punpcklwd_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF15;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpcklwd_mmx+0), 88);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 80) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 84) = param2 + 0;
    gen_code_ptr += 88;
}
break;

case INDEX_op_punpckldq_mmx: {
    long param1, param2;
    extern void op_punpckldq_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF0C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckldq_mmx+0), 52);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 48) = param2 + 0;
    gen_code_ptr += 52;
}
break;

case INDEX_op_punpckhbw_mmx: {
    long param1, param2;
    extern void op_punpckhbw_mmx();
    memcpy(gen_code_ptr, (void *)(((char *)&op_punpckhbw_mmx)+0), 132); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 132 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 124) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 128) = param2 + 0;
    gen_code_ptr += 132;
}
break;

case INDEX_op_punpckhwd_mmx: {
    long param1, param2;
    extern void op_punpckhwd_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF15;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckhwd_mmx+0), 88);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 80) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 84) = param2 + 0;
    gen_code_ptr += 88;
}
break;

case INDEX_op_punpckhdq_mmx: {
    long param1, param2;
    extern void op_punpckhdq_mmx();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF0E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckhdq_mmx+0), 60);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 52) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 56) = param2 + 0;
    gen_code_ptr += 60;
}
break;

case INDEX_op_psrlw_xmm: {
    long param1, param2;
    extern void op_psrlw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psrlw_xmm+0), 176);
    *(uint32_t *)(gen_code_ptr + 176 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 168) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 172) = param2 + 0;
    gen_code_ptr += 176;
}
break;

case INDEX_op_psraw_xmm: {
    long param1, param2;
    extern void op_psraw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psraw_xmm+0), 164);
    *(uint32_t *)(gen_code_ptr + 164 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 156) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 160) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_psllw_xmm: {
    long param1, param2;
    extern void op_psllw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psllw_xmm+0), 176);
    *(uint32_t *)(gen_code_ptr + 176 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 168) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 172) = param2 + 0;
    gen_code_ptr += 176;
}
break;

case INDEX_op_psrld_xmm: {
    long param1, param2;
    extern void op_psrld_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psrld_xmm+0), 128);
    *(uint32_t *)(gen_code_ptr + 128 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 120) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 124) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_psrad_xmm: {
    long param1, param2;
    extern void op_psrad_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psrad_xmm+0), 116);
    *(uint32_t *)(gen_code_ptr + 116 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 108) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 112) = param2 + 0;
    gen_code_ptr += 116;
}
break;

case INDEX_op_pslld_xmm: {
    long param1, param2;
    extern void op_pslld_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pslld_xmm+0), 128);
    *(uint32_t *)(gen_code_ptr + 128 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 120) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 124) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_psrlq_xmm: {
    long param1, param2;
    extern void op_psrlq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_psrlq_xmm+0), 172);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 160) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 164) = param2 + 0;
    gen_code_ptr += 172;
}
break;

case INDEX_op_psllq_xmm: {
    long param1, param2;
    extern void op_psllq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_psllq_xmm+0), 172);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 160) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 164) = param2 + 0;
    gen_code_ptr += 172;
}
break;

case INDEX_op_psrldq_xmm: {
    long param1, param2;
    extern void op_psrldq_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psrldq_xmm+0), 112);
    *(uint32_t *)(gen_code_ptr + 112 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 104) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 108) = param2 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_pslldq_xmm: {
    long param1, param2;
    extern void op_pslldq_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pslldq_xmm+0), 104);
    *(uint32_t *)(gen_code_ptr + 104 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 96) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 100) = param2 + 0;
    gen_code_ptr += 104;
}
break;

case INDEX_op_paddb_xmm: {
    long param1, param2;
    extern void op_paddb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddb_xmm+0), 276);
    *(uint32_t *)(gen_code_ptr + 276 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 268) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 272) = param2 + 0;
    gen_code_ptr += 276;
}
break;

case INDEX_op_paddw_xmm: {
    long param1, param2;
    extern void op_paddw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddw_xmm+0), 156);
    *(uint32_t *)(gen_code_ptr + 156 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 152) = param2 + 0;
    gen_code_ptr += 156;
}
break;

case INDEX_op_paddl_xmm: {
    long param1, param2;
    extern void op_paddl_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddl_xmm+0), 84);
    *(uint32_t *)(gen_code_ptr + 84 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 76) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 80) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_paddq_xmm: {
    long param1, param2;
    extern void op_paddq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_paddq_xmm+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_psubb_xmm: {
    long param1, param2;
    extern void op_psubb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubb_xmm+0), 276);
    *(uint32_t *)(gen_code_ptr + 276 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 268) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 272) = param2 + 0;
    gen_code_ptr += 276;
}
break;

case INDEX_op_psubw_xmm: {
    long param1, param2;
    extern void op_psubw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubw_xmm+0), 156);
    *(uint32_t *)(gen_code_ptr + 156 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 152) = param2 + 0;
    gen_code_ptr += 156;
}
break;

case INDEX_op_psubl_xmm: {
    long param1, param2;
    extern void op_psubl_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubl_xmm+0), 84);
    *(uint32_t *)(gen_code_ptr + 84 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 76) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 80) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_psubq_xmm: {
    long param1, param2;
    extern void op_psubq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_psubq_xmm+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_paddusb_xmm: {
    long param1, param2;
    extern void op_paddusb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddusb_xmm+0), 404);
    *(uint32_t *)(gen_code_ptr + 404 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 396) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 400) = param2 + 0;
    gen_code_ptr += 404;
}
break;

case INDEX_op_paddsb_xmm: {
    long param1, param2;
    extern void op_paddsb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddsb_xmm+0), 668);
    *(uint32_t *)(gen_code_ptr + 668 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 660) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 664) = param2 + 0;
    gen_code_ptr += 668;
}
break;

case INDEX_op_psubusb_xmm: {
    long param1, param2;
    extern void op_psubusb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubusb_xmm+0), 596);
    *(uint32_t *)(gen_code_ptr + 596 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 588) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 592) = param2 + 0;
    gen_code_ptr += 596;
}
break;

case INDEX_op_psubsb_xmm: {
    long param1, param2;
    extern void op_psubsb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubsb_xmm+0), 668);
    *(uint32_t *)(gen_code_ptr + 668 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 660) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 664) = param2 + 0;
    gen_code_ptr += 668;
}
break;

case INDEX_op_paddusw_xmm: {
    long param1, param2;
    extern void op_paddusw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddusw_xmm+0), 256);
    *(uint32_t *)(gen_code_ptr + 256 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 244) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 248) = param2 + 0;
    gen_code_ptr += 256;
}
break;

case INDEX_op_paddsw_xmm: {
    long param1, param2;
    extern void op_paddsw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_paddsw_xmm+0), 356);
    *(uint32_t *)(gen_code_ptr + 356 - 20) = 0xEA000003;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 340) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 344) = param2 + 0;
    gen_code_ptr += 356;
}
break;

case INDEX_op_psubusw_xmm: {
    long param1, param2;
    extern void op_psubusw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubusw_xmm+0), 320);
    *(uint32_t *)(gen_code_ptr + 320 - 16) = 0xEA000002;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 308) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 312) = param2 + 0;
    gen_code_ptr += 320;
}
break;

case INDEX_op_psubsw_xmm: {
    long param1, param2;
    extern void op_psubsw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psubsw_xmm+0), 356);
    *(uint32_t *)(gen_code_ptr + 356 - 20) = 0xEA000003;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 340) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 344) = param2 + 0;
    gen_code_ptr += 356;
}
break;

case INDEX_op_pminub_xmm: {
    long param1, param2;
    extern void op_pminub_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pminub_xmm+0), 340);
    *(uint32_t *)(gen_code_ptr + 340 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 332) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 336) = param1 + 0;
    gen_code_ptr += 340;
}
break;

case INDEX_op_pmaxub_xmm: {
    long param1, param2;
    extern void op_pmaxub_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmaxub_xmm+0), 340);
    *(uint32_t *)(gen_code_ptr + 340 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 332) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 336) = param1 + 0;
    gen_code_ptr += 340;
}
break;

case INDEX_op_pminsw_xmm: {
    long param1, param2;
    extern void op_pminsw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pminsw_xmm+0), 188);
    *(uint32_t *)(gen_code_ptr + 188 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 180) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 184) = param2 + 0;
    gen_code_ptr += 188;
}
break;

case INDEX_op_pmaxsw_xmm: {
    long param1, param2;
    extern void op_pmaxsw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmaxsw_xmm+0), 188);
    *(uint32_t *)(gen_code_ptr + 188 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 180) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 184) = param2 + 0;
    gen_code_ptr += 188;
}
break;

case INDEX_op_pand_xmm: {
    long param1, param2;
    extern void op_pand_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pand_xmm+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_pandn_xmm: {
    long param1, param2;
    extern void op_pandn_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pandn_xmm+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_por_xmm: {
    long param1, param2;
    extern void op_por_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_por_xmm+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_pxor_xmm: {
    long param1, param2;
    extern void op_pxor_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pxor_xmm+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_pcmpgtb_xmm: {
    long param1, param2;
    extern void op_pcmpgtb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpgtb_xmm+0), 412);
    *(uint32_t *)(gen_code_ptr + 412 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 404) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 408) = param2 + 0;
    gen_code_ptr += 412;
}
break;

case INDEX_op_pcmpgtw_xmm: {
    long param1, param2;
    extern void op_pcmpgtw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpgtw_xmm+0), 220);
    *(uint32_t *)(gen_code_ptr + 220 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 212) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 216) = param2 + 0;
    gen_code_ptr += 220;
}
break;

case INDEX_op_pcmpgtl_xmm: {
    long param1, param2;
    extern void op_pcmpgtl_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpgtl_xmm+0), 116);
    *(uint32_t *)(gen_code_ptr + 116 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 108) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 112) = param2 + 0;
    gen_code_ptr += 116;
}
break;

case INDEX_op_pcmpeqb_xmm: {
    long param1, param2;
    extern void op_pcmpeqb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpeqb_xmm+0), 404);
    *(uint32_t *)(gen_code_ptr + 404 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 396) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 400) = param2 + 0;
    gen_code_ptr += 404;
}
break;

case INDEX_op_pcmpeqw_xmm: {
    long param1, param2;
    extern void op_pcmpeqw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpeqw_xmm+0), 220);
    *(uint32_t *)(gen_code_ptr + 220 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 212) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 216) = param2 + 0;
    gen_code_ptr += 220;
}
break;

case INDEX_op_pcmpeql_xmm: {
    long param1, param2;
    extern void op_pcmpeql_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pcmpeql_xmm+0), 116);
    *(uint32_t *)(gen_code_ptr + 116 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 108) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 112) = param2 + 0;
    gen_code_ptr += 116;
}
break;

case INDEX_op_pmullw_xmm: {
    long param1, param2;
    extern void op_pmullw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmullw_xmm+0), 156);
    *(uint32_t *)(gen_code_ptr + 156 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 152) = param2 + 0;
    gen_code_ptr += 156;
}
break;

case INDEX_op_pmulhuw_xmm: {
    long param1, param2;
    extern void op_pmulhuw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmulhuw_xmm+0), 188);
    *(uint32_t *)(gen_code_ptr + 188 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 180) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 184) = param2 + 0;
    gen_code_ptr += 188;
}
break;

case INDEX_op_pmulhw_xmm: {
    long param1, param2;
    extern void op_pmulhw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmulhw_xmm+0), 188);
    *(uint32_t *)(gen_code_ptr + 188 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 180) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 184) = param2 + 0;
    gen_code_ptr += 188;
}
break;

case INDEX_op_pavgb_xmm: {
    long param1, param2;
    extern void op_pavgb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pavgb_xmm+0), 404);
    *(uint32_t *)(gen_code_ptr + 404 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 396) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 400) = param2 + 0;
    gen_code_ptr += 404;
}
break;

case INDEX_op_pavgw_xmm: {
    long param1, param2;
    extern void op_pavgw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pavgw_xmm+0), 220);
    *(uint32_t *)(gen_code_ptr + 220 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 212) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 216) = param2 + 0;
    gen_code_ptr += 220;
}
break;

case INDEX_op_pmuludq_xmm: {
    long param1, param2;
    extern void op_pmuludq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF10;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pmuludq_xmm+0), 68);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param1 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_pmaddwd_xmm: {
    long param1, param2;
    extern void op_pmaddwd_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pmaddwd_xmm+0), 120);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 112) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 116) = param2 + 0;
    gen_code_ptr += 120;
}
break;

case INDEX_op_psadbw_xmm: {
    long param1, param2;
    extern void op_psadbw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_psadbw_xmm+0), 424);
    *(uint32_t *)(gen_code_ptr + 424 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 416) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 420) = param2 + 0;
    gen_code_ptr += 424;
}
break;

case INDEX_op_maskmov_xmm: {
    long param1, param2;
    extern void op_maskmov_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF33;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_maskmov_xmm+0), 208);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 196) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 200) = param2 + 0;
    gen_code_ptr += 208;
}
break;

case INDEX_op_movl_mm_T0_xmm: {
    long param1;
    extern void op_movl_mm_T0_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_mm_T0_xmm+0), 40);
    *(uint32_t *)(gen_code_ptr + 40 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 36) = param1 + 0;
    gen_code_ptr += 40;
}
break;

case INDEX_op_movl_T0_mm_xmm: {
    long param1;
    extern void op_movl_T0_mm_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_mm_xmm+0), 16);
    *(uint32_t *)(gen_code_ptr + 16 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_shufps: {
    long param1, param2, param3;
    extern void op_shufps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shufps+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 108) = param3 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_shufpd: {
    long param1, param2, param3;
    extern void op_shufpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_shufpd+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 92) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 96) = param3 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_pshufd_xmm: {
    long param1, param2, param3;
    extern void op_pshufd_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pshufd_xmm+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 108) = param3 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_pshuflw_xmm: {
    long param1, param2, param3;
    extern void op_pshuflw_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pshuflw_xmm+0), 132);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 120) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 124) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 128) = param3 + 0;
    gen_code_ptr += 132;
}
break;

case INDEX_op_pshufhw_xmm: {
    long param1, param2, param3;
    extern void op_pshufhw_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_pshufhw_xmm+0), 140);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 128) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 132) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 136) = param3 + 0;
    gen_code_ptr += 140;
}
break;

case INDEX_op_addps: {
    long param1, param2;
    extern void op_addps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_addps+0), 184);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param2 + 0;
    gen_code_ptr += 184;
}
break;

case INDEX_op_addss: {
    long param1, param2;
    extern void op_addss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_addss+0), 72);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_addpd: {
    long param1, param2;
    extern void op_addpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_addpd+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_addsd: {
    long param1, param2;
    extern void op_addsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_addsd+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 68) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 72) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_subps: {
    long param1, param2;
    extern void op_subps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_subps+0), 184);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param2 + 0;
    gen_code_ptr += 184;
}
break;

case INDEX_op_subss: {
    long param1, param2;
    extern void op_subss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_subss+0), 72);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_subpd: {
    long param1, param2;
    extern void op_subpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_subpd+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_subsd: {
    long param1, param2;
    extern void op_subsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_subsd+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 68) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 72) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_mulps: {
    long param1, param2;
    extern void op_mulps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulps+0), 184);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param2 + 0;
    gen_code_ptr += 184;
}
break;

case INDEX_op_mulss: {
    long param1, param2;
    extern void op_mulss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulss+0), 72);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_mulpd: {
    long param1, param2;
    extern void op_mulpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulpd+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_mulsd: {
    long param1, param2;
    extern void op_mulsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulsd+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 68) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 72) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_divps: {
    long param1, param2;
    extern void op_divps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2D;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_divps+0), 184);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param2 + 0;
    gen_code_ptr += 184;
}
break;

case INDEX_op_divss: {
    long param1, param2;
    extern void op_divss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_divss+0), 72);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_divpd: {
    long param1, param2;
    extern void op_divpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_divpd+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_divsd: {
    long param1, param2;
    extern void op_divsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF13;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_divsd+0), 80);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 68) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 72) = param2 + 0;
    gen_code_ptr += 80;
}
break;

case INDEX_op_minps: {
    long param1, param2;
    extern void op_minps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF40;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_minps+0), 260);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 248) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 252) = param2 + 0;
    gen_code_ptr += 260;
}
break;

case INDEX_op_minss: {
    long param1, param2;
    extern void op_minss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_minss+0), 108);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 96) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 100) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_minpd: {
    long param1, param2;
    extern void op_minpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF29;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_minpd+0), 168);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 156) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 160) = param2 + 0;
    gen_code_ptr += 168;
}
break;

case INDEX_op_minsd: {
    long param1, param2;
    extern void op_minsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_minsd+0), 108);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 96) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 100) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_maxps: {
    long param1, param2;
    extern void op_maxps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF40;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_maxps+0), 260);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 248) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 252) = param2 + 0;
    gen_code_ptr += 260;
}
break;

case INDEX_op_maxss: {
    long param1, param2;
    extern void op_maxss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_maxss+0), 108);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 96) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 100) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_maxpd: {
    long param1, param2;
    extern void op_maxpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF29;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_maxpd+0), 168);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 156) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 160) = param2 + 0;
    gen_code_ptr += 168;
}
break;

case INDEX_op_maxsd: {
    long param1, param2;
    extern void op_maxsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_maxsd+0), 108);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 96) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 100) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_sqrtps: {
    long param1, param2;
    extern void op_sqrtps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtps+0), 176);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 164) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 168) = param2 + 0;
    gen_code_ptr += 176;
}
break;

case INDEX_op_sqrtss: {
    long param1, param2;
    extern void op_sqrtss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtss+0), 72);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_sqrtpd: {
    long param1, param2;
    extern void op_sqrtpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtpd+0), 116);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 104) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 108) = param2 + 0;
    gen_code_ptr += 116;
}
break;

case INDEX_op_sqrtsd: {
    long param1, param2;
    extern void op_sqrtsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF12;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtsd+0), 76);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 64) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 68) = param2 + 0;
    gen_code_ptr += 76;
}
break;

case INDEX_op_cvtps2pd: {
    long param1, param2;
    extern void op_cvtps2pd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtps2pd+0), 116);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 104) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 108) = param2 + 0;
    gen_code_ptr += 116;
}
break;

case INDEX_op_cvtpd2ps: {
    long param1, param2;
    extern void op_cvtpd2ps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtpd2ps+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_cvtss2sd: {
    long param1, param2;
    extern void op_cvtss2sd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtss2sd+0), 72);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_cvtsd2ss: {
    long param1, param2;
    extern void op_cvtsd2ss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF12;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtsd2ss+0), 76);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 64) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 68) = param2 + 0;
    gen_code_ptr += 76;
}
break;

case INDEX_op_cvtdq2ps: {
    long param1, param2;
    extern void op_cvtdq2ps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtdq2ps+0), 172);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 160) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 164) = param2 + 0;
    gen_code_ptr += 172;
}
break;

case INDEX_op_cvtdq2pd: {
    long param1, param2;
    extern void op_cvtdq2pd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtdq2pd+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_cvtpi2ps: {
    long param1, param2;
    extern void op_cvtpi2ps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtpi2ps+0), 108);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 96) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 100) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_cvtpi2pd: {
    long param1, param2;
    extern void op_cvtpi2pd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtpi2pd+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_cvtsi2ss: {
    long param1;
    extern void op_cvtsi2ss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF0F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtsi2ss+0), 64);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    gen_code_ptr += 64;
}
break;

case INDEX_op_cvtsi2sd: {
    long param1;
    extern void op_cvtsi2sd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF0F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtsi2sd+0), 64);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    gen_code_ptr += 64;
}
break;

case INDEX_op_cvtps2dq: {
    long param1, param2;
    extern void op_cvtps2dq();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtps2dq+0), 176);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 164) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 168) = param2 + 0;
    gen_code_ptr += 176;
}
break;

case INDEX_op_cvtpd2dq: {
    long param1, param2;
    extern void op_cvtpd2dq();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtpd2dq+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_cvtps2pi: {
    long param1, param2;
    extern void op_cvtps2pi();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtps2pi+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_cvtpd2pi: {
    long param1, param2;
    extern void op_cvtpd2pi();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtpd2pi+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_cvtss2si: {
    long param1;
    extern void op_cvtss2si();
    memcpy(gen_code_ptr, (void *)(((char *)&op_cvtss2si)+0), 44); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 44 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 36) = param1 + 0;
    gen_code_ptr += 44;
}
break;

case INDEX_op_cvtsd2si: {
    long param1;
    extern void op_cvtsd2si();
    memcpy(gen_code_ptr, (void *)(((char *)&op_cvtsd2si)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_cvttps2dq: {
    long param1, param2;
    extern void op_cvttps2dq();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvttps2dq+0), 176);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 164) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 168) = param2 + 0;
    gen_code_ptr += 176;
}
break;

case INDEX_op_cvttpd2dq: {
    long param1, param2;
    extern void op_cvttpd2dq();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1F;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvttpd2dq+0), 128);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 128;
}
break;

case INDEX_op_cvttps2pi: {
    long param1, param2;
    extern void op_cvttps2pi();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvttps2pi+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_cvttpd2pi: {
    long param1, param2;
    extern void op_cvttpd2pi();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvttpd2pi+0), 112);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 112;
}
break;

case INDEX_op_cvttss2si: {
    long param1;
    extern void op_cvttss2si();
    memcpy(gen_code_ptr, (void *)(((char *)&op_cvttss2si)+0), 44); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 44 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 36) = param1 + 0;
    gen_code_ptr += 44;
}
break;

case INDEX_op_cvttsd2si: {
    long param1;
    extern void op_cvttsd2si();
    memcpy(gen_code_ptr, (void *)(((char *)&op_cvttsd2si)+0), 48); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 48 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    gen_code_ptr += 48;
}
break;

case INDEX_op_rsqrtps: {
    long param1, param2;
    extern void op_rsqrtps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rsqrtps+0), 160);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 152) = param2 + 0;
    gen_code_ptr += 160;
}
break;

case INDEX_op_rsqrtss: {
    long param1, param2;
    extern void op_rsqrtss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF10;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rsqrtss+0), 68);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 60) = param2 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_rcpps: {
    long param1, param2;
    extern void op_rcpps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcpps+0), 160);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 152) = param2 + 0;
    gen_code_ptr += 160;
}
break;

case INDEX_op_rcpss: {
    long param1, param2;
    extern void op_rcpss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF10;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_rcpss+0), 68);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 60) = param2 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_haddps: {
    long param1, param2;
    extern void op_haddps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_haddps+0), 180);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 168) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 172) = param2 + 0;
    gen_code_ptr += 180;
}
break;

case INDEX_op_haddpd: {
    long param1, param2;
    extern void op_haddpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_haddpd+0), 140);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 128) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 132) = param2 + 0;
    gen_code_ptr += 140;
}
break;

case INDEX_op_hsubps: {
    long param1, param2;
    extern void op_hsubps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2C;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_hsubps+0), 180);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 168) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 172) = param2 + 0;
    gen_code_ptr += 180;
}
break;

case INDEX_op_hsubpd: {
    long param1, param2;
    extern void op_hsubpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF22;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_hsubpd+0), 140);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 128) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 132) = param2 + 0;
    gen_code_ptr += 140;
}
break;

case INDEX_op_addsubps: {
    long param1, param2;
    extern void op_addsubps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_addsubps+0), 188);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 172) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 176) = param2 + 0;
    gen_code_ptr += 188;
}
break;

case INDEX_op_addsubpd: {
    long param1, param2;
    extern void op_addsubpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF20;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_addsubpd+0), 132);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 116) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 120) = param2 + 0;
    gen_code_ptr += 132;
}
break;

case INDEX_op_cmpeqps: {
    long param1, param2;
    extern void op_cmpeqps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpeqps+0), 228);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 216) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 220) = param2 + 0;
    gen_code_ptr += 228;
}
break;

case INDEX_op_cmpeqss: {
    long param1, param2;
    extern void op_cmpeqss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF14;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpeqss+0), 84);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_cmpeqpd: {
    long param1, param2;
    extern void op_cmpeqpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpeqpd+0), 164);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 152) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 156) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_cmpeqsd: {
    long param1, param2;
    extern void op_cmpeqsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpeqsd+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 92) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_cmpltps: {
    long param1, param2;
    extern void op_cmpltps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpltps+0), 228);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 216) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 220) = param2 + 0;
    gen_code_ptr += 228;
}
break;

case INDEX_op_cmpltss: {
    long param1, param2;
    extern void op_cmpltss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF14;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpltss+0), 84);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_cmpltpd: {
    long param1, param2;
    extern void op_cmpltpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpltpd+0), 164);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 152) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 156) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_cmpltsd: {
    long param1, param2;
    extern void op_cmpltsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpltsd+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 92) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_cmpleps: {
    long param1, param2;
    extern void op_cmpleps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpleps+0), 228);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 216) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 220) = param2 + 0;
    gen_code_ptr += 228;
}
break;

case INDEX_op_cmpless: {
    long param1, param2;
    extern void op_cmpless();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF14;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpless+0), 84);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_cmplepd: {
    long param1, param2;
    extern void op_cmplepd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmplepd+0), 164);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 152) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 156) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_cmplesd: {
    long param1, param2;
    extern void op_cmplesd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmplesd+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 92) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_cmpunordps: {
    long param1, param2;
    extern void op_cmpunordps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF6E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpunordps+0), 444);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 432) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 436) = param2 + 0;
    gen_code_ptr += 444;
}
break;

case INDEX_op_cmpunordss: {
    long param1, param2;
    extern void op_cmpunordss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpunordss+0), 136);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 124) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 128) = param2 + 0;
    gen_code_ptr += 136;
}
break;

case INDEX_op_cmpunordpd: {
    long param1, param2;
    extern void op_cmpunordpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF46;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpunordpd+0), 284);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 272) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 276) = param2 + 0;
    gen_code_ptr += 284;
}
break;

case INDEX_op_cmpunordsd: {
    long param1, param2;
    extern void op_cmpunordsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpunordsd+0), 160);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 152) = param2 + 0;
    gen_code_ptr += 160;
}
break;

case INDEX_op_cmpneqps: {
    long param1, param2;
    extern void op_cmpneqps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpneqps+0), 228);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 216) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 220) = param2 + 0;
    gen_code_ptr += 228;
}
break;

case INDEX_op_cmpneqss: {
    long param1, param2;
    extern void op_cmpneqss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF14;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpneqss+0), 84);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_cmpneqpd: {
    long param1, param2;
    extern void op_cmpneqpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpneqpd+0), 164);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 152) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 156) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_cmpneqsd: {
    long param1, param2;
    extern void op_cmpneqsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpneqsd+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 92) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_cmpnltps: {
    long param1, param2;
    extern void op_cmpnltps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnltps+0), 228);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 216) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 220) = param2 + 0;
    gen_code_ptr += 228;
}
break;

case INDEX_op_cmpnltss: {
    long param1, param2;
    extern void op_cmpnltss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF14;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnltss+0), 84);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_cmpnltpd: {
    long param1, param2;
    extern void op_cmpnltpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnltpd+0), 164);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 152) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 156) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_cmpnltsd: {
    long param1, param2;
    extern void op_cmpnltsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnltsd+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 92) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_cmpnleps: {
    long param1, param2;
    extern void op_cmpnleps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF38;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnleps+0), 228);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 216) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 220) = param2 + 0;
    gen_code_ptr += 228;
}
break;

case INDEX_op_cmpnless: {
    long param1, param2;
    extern void op_cmpnless();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF14;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnless+0), 84);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 72) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 76) = param2 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_cmpnlepd: {
    long param1, param2;
    extern void op_cmpnlepd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnlepd+0), 164);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 152) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 156) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_cmpnlesd: {
    long param1, param2;
    extern void op_cmpnlesd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF18;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnlesd+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 88) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 92) = param2 + 0;
    gen_code_ptr += 100;
}
break;

case INDEX_op_cmpordps: {
    long param1, param2;
    extern void op_cmpordps();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF6E;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpordps+0), 444);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 432) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 436) = param2 + 0;
    gen_code_ptr += 444;
}
break;

case INDEX_op_cmpordss: {
    long param1, param2;
    extern void op_cmpordss();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF21;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpordss+0), 136);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 124) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 128) = param2 + 0;
    gen_code_ptr += 136;
}
break;

case INDEX_op_cmpordpd: {
    long param1, param2;
    extern void op_cmpordpd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF46;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpordpd+0), 284);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 272) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 276) = param2 + 0;
    gen_code_ptr += 284;
}
break;

case INDEX_op_cmpordsd: {
    long param1, param2;
    extern void op_cmpordsd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF27;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpordsd+0), 160);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 148) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 152) = param2 + 0;
    gen_code_ptr += 160;
}
break;

case INDEX_op_ucomiss: {
    long param1, param2;
    extern void op_ucomiss();
    memcpy(gen_code_ptr, (void *)(((char *)&op_ucomiss)+0), 72); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 72 - 20) = 0xEA000003;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 60) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_comiss: {
    long param1, param2;
    extern void op_comiss();
    memcpy(gen_code_ptr, (void *)(((char *)&op_comiss)+0), 72); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 72 - 20) = 0xEA000003;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 60) = param2 + 0;
    gen_code_ptr += 72;
}
break;

case INDEX_op_ucomisd: {
    long param1, param2;
    extern void op_ucomisd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF16;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_ucomisd+0), 92);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 76) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 80) = param2 + 0;
    gen_code_ptr += 92;
}
break;

case INDEX_op_comisd: {
    long param1, param2;
    extern void op_comisd();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF16;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_comisd+0), 92);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 76) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 80) = param2 + 0;
    gen_code_ptr += 92;
}
break;

case INDEX_op_movmskps: {
    long param1;
    extern void op_movmskps();
    memcpy(gen_code_ptr, (void *)((char *)&op_movmskps+0), 56);
    *(uint32_t *)(gen_code_ptr + 56 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 52) = param1 + 0;
    gen_code_ptr += 56;
}
break;

case INDEX_op_movmskpd: {
    long param1;
    extern void op_movmskpd();
    memcpy(gen_code_ptr, (void *)((char *)&op_movmskpd+0), 36);
    *(uint32_t *)(gen_code_ptr + 36 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 32) = param1 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_pmovmskb_xmm: {
    long param1;
    extern void op_pmovmskb_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pmovmskb_xmm+0), 252);
    *(uint32_t *)(gen_code_ptr + 252 - 8) = 0xEA000000;
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 248) = param1 + 0;
    gen_code_ptr += 252;
}
break;

case INDEX_op_pinsrw_xmm: {
    long param1, param2;
    extern void op_pinsrw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pinsrw_xmm+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 28) = param2 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_pextrw_xmm: {
    long param1, param2;
    extern void op_pextrw_xmm();
    memcpy(gen_code_ptr, (void *)((char *)&op_pextrw_xmm+0), 32);
    *(uint32_t *)(gen_code_ptr + 32 - 12) = 0xEA000001;
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 28) = param2 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_packsswb_xmm: {
    long param1, param2;
    extern void op_packsswb_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF7A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_packsswb_xmm+0), 492);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 484) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 488) = param2 + 0;
    gen_code_ptr += 492;
}
break;

case INDEX_op_packuswb_xmm: {
    long param1, param2;
    extern void op_packuswb_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF7A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_packuswb_xmm+0), 492);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 484) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 488) = param2 + 0;
    gen_code_ptr += 492;
}
break;

case INDEX_op_packssdw_xmm: {
    long param1, param2;
    extern void op_packssdw_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF4B;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_packssdw_xmm+0), 304);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 288) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 292) = param1 + 0;
    gen_code_ptr += 304;
}
break;

case INDEX_op_punpcklbw_xmm: {
    long param1, param2;
    extern void op_punpcklbw_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF28;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpcklbw_xmm+0), 164);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 156) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 160) = param2 + 0;
    gen_code_ptr += 164;
}
break;

case INDEX_op_punpcklwd_xmm: {
    long param1, param2;
    extern void op_punpcklwd_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpcklwd_xmm+0), 108);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_punpckldq_xmm: {
    long param1, param2;
    extern void op_punpckldq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF10;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckldq_xmm+0), 68);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_punpcklqdq_xmm: {
    long param1, param2;
    extern void op_punpcklqdq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF10;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpcklqdq_xmm+0), 68);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 60) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 68;
}
break;

case INDEX_op_punpckhbw_xmm: {
    long param1, param2;
    extern void op_punpckhbw_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF2A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckhbw_xmm+0), 172);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 164) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 168) = param2 + 0;
    gen_code_ptr += 172;
}
break;

case INDEX_op_punpckhwd_xmm: {
    long param1, param2;
    extern void op_punpckhwd_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF1A;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckhwd_xmm+0), 108);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 100) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 104) = param2 + 0;
    gen_code_ptr += 108;
}
break;

case INDEX_op_punpckhdq_xmm: {
    long param1, param2;
    extern void op_punpckhdq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF12;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckhdq_xmm+0), 76);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 68) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 72) = param2 + 0;
    gen_code_ptr += 76;
}
break;

case INDEX_op_punpckhqdq_xmm: {
    long param1, param2;
    extern void op_punpckhqdq_xmm();
    ((uint32_t*)gen_code_ptr)[0]=0xE28FEF11;
    gen_code_ptr += 4;
    memcpy(gen_code_ptr, (void *)((char *)&op_punpckhqdq_xmm+0), 72);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 64) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 68) = param2 + 8;
    gen_code_ptr += 72;
}
break;

case INDEX_op_vmrun: {
    extern void op_vmrun();
    memcpy(gen_code_ptr, (void *)(((char *)&op_vmrun)+0), 28); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 28 - 8) = 0xEA000000;
    gen_code_ptr += 28;
}
break;

case INDEX_op_vmmcall: {
    extern void op_vmmcall();
    memcpy(gen_code_ptr, (void *)(((char *)&op_vmmcall)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_vmload: {
    extern void op_vmload();
    memcpy(gen_code_ptr, (void *)(((char *)&op_vmload)+0), 28); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 28 - 8) = 0xEA000000;
    gen_code_ptr += 28;
}
break;

case INDEX_op_vmsave: {
    extern void op_vmsave();
    memcpy(gen_code_ptr, (void *)(((char *)&op_vmsave)+0), 28); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 28 - 8) = 0xEA000000;
    gen_code_ptr += 28;
}
break;

case INDEX_op_stgi: {
    extern void op_stgi();
    memcpy(gen_code_ptr, (void *)(((char *)&op_stgi)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_clgi: {
    extern void op_clgi();
    memcpy(gen_code_ptr, (void *)(((char *)&op_clgi)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_skinit: {
    extern void op_skinit();
    memcpy(gen_code_ptr, (void *)(((char *)&op_skinit)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_invlpga: {
    extern void op_invlpga();
    memcpy(gen_code_ptr, (void *)(((char *)&op_invlpga)+0), 24); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 24 - 8) = 0xEA000000;
    gen_code_ptr += 24;
}
break;

case INDEX_op_the_last_function_in_file: {
    extern void op_the_last_function_in_file();
    memcpy(gen_code_ptr, (void *)(((char *)&op_the_last_function_in_file)+0), 0); *((uint32_t*)gen_code_ptr)=0xe1a00000;
    *(uint32_t *)(gen_code_ptr + 0 - 8) = 0xEA000000;
    gen_code_ptr += 0;
}
break;

        case INDEX_op_nop:
            break;
        case INDEX_op_nop1:
            opparam_ptr++;
            break;
        case INDEX_op_nop2:
            opparam_ptr += 2;
            break;
        case INDEX_op_nop3:
            opparam_ptr += 3;
            break;
        default:
            goto the_end;
        }
    }
 the_end:
flush_icache_range((unsigned long)gen_code_buf, (unsigned long)gen_code_ptr);
return gen_code_ptr -  gen_code_buf;
}

