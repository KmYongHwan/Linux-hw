#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xa033d651, "mcb_unregister_driver" },
	{ 0xe00365c5, "uart_unregister_driver" },
	{ 0x3ed4e735, "__mcb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x9f6dd27d, "uart_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1dbaef95, "uart_handle_dcd_change" },
	{ 0x4d8323d2, "do_SAK" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe41da79c, "uart_handle_cts_change" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x586024ff, "tty_buffer_request_room" },
	{ 0x848d372e, "iowrite8" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9778c14, "uart_write_wakeup" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x238695d4, "uart_add_one_port" },
	{ 0x8de483cc, "mcb_get_irq" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf10de535, "ioread8" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc222c8b, "uart_update_timeout" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3c2271c8, "uart_get_baud_rate" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xedc03953, "iounmap" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6128abbd, "mcb_request_mem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb90692f4, "uart_remove_one_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "2D92F3DA81C684AA51A73AC");
