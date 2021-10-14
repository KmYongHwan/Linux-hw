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
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0xc5850110, "printk" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x44f500d, "tty_standard_install" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6168380e, "seq_putc" },
	{ 0xc4142837, "seq_printf" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x6ff732c5, "tty_port_tty_hangup" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x3528921c, "sdio_writeb" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0xba312d7b, "current_task" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12998a38, "tty_port_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "F71EA00D7DECD686DE010F5");
