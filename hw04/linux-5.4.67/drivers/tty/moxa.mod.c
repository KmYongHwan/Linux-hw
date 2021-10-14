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
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xca1e1601, "tty_port_link_device" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x60fdf356, "tty_schedule_flip" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x777ae486, "tty_prepare_flip_string" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xede283d, "release_firmware" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x71deb539, "request_firmware" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf26e4dd0, "tty_port_block_til_ready" },
	{ 0x1d2c1173, "tty_port_tty_set" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4dd981f, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ff732c5, "tty_port_tty_hangup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001393d00002180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00003200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00002040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29D024B5FB94B63ABBA4D9C");
