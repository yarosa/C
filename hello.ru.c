/* hello.c ** "Hello, world" - версия модуля ядра.*/
 
#include < linux/kernel.h > /* Для выполнения работы в ядре*/ 
#include < linux/module.h > /* Для создания модуля */
 
/* Точка входа - инициализация модуля */ 
int init_module(void)
 
{ 
printk("(1)Hello, world\n"); 
/* Если код возврата не нуль, то функция init_module завершилась неудачно и модуль ядра не будет загружен */ 
return 0; 
}
 
/* Деинициализация модуля */ 
void cleanup_module(void) 
{ 
printk("Goodbye, cruel world\n"); 
} 
