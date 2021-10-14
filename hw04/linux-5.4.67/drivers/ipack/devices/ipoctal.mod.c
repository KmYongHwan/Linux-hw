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
	{ 0xe78db346, "ipack_driver_unregister" },
	{ 0x61850709, "ipack_driver_register" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0xf10de535, "ioread8" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xe8e2f679, "tty_port_alloc_xmit_buf" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0xf720a60b, "module_put" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x848d372e, "iowrite8" },
	{ 0x37a0cba, "kfree" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0xfbf586df, "tty_port_free_xmit_buf" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipack");

MODULE_ALIAS("ipack:f01v000000F0d00000022*");
MODULE_ALIAS("ipack:f01v000000F0d0000002A*");
MODULE_ALIAS("ipack:f01v000000F0d00000048*");

MODULE_INFO(srcversion, "46168DD4CDC1C7ACCC3B95A");
