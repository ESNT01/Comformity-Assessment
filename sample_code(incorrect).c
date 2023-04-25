typedef   signed int      int32_t;
typedef float             float32_t;

int32_t func(void);

static int32_t s16a;
static float32_t f32a;

int32_t func(void){
	s16a = f32a; 	// MISRA 2004 Rule Violation (2.2, 8.7, 10.2)
			// MISRA 2004 Rule Violation (2.2, 16.8)
}
