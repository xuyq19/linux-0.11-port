#ifdef MEM_H

/*
 * Following global vars are provided by os.ld
 */

extern uint32_t _heap_start;
extern uint32_t _heap_size;
extern uint32_t _text_start;
extern uint32_t _text_end;
extern uint32_t _data_start;
extern uint32_t _data_end;
extern uint32_t _rodata_start;
extern uint32_t _rodata_end;
extern uint32_t _bss_start;
extern uint32_t _bss_end;

#define HEAP_START ((uint32_t)&_heap_start)
#define HEAP_SIZE ((uint32_t)&_heap_size)
#define TEXT_START ((uint32_t)&_text_start)
#define TEXT_END ((uint32_t)&_text_end)
#define DATA_START ((uint32_t)&_data_start)
#define DATA_END ((uint32_t)&_data_end)
#define RODATA_START ((uint32_t)&_rodata_start)
#define RODATA_END ((uint32_t)&_rodata_end)
#define BSS_START ((uint32_t)&_bss_start)
#define BSS_END ((uint32_t)&_bss_end)

#endif
