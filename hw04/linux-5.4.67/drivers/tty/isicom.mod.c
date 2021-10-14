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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0x4d8323d2, "do_SAK" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x777ae486, "tty_prepare_flip_string" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xede283d, "release_firmware" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x71deb539, "request_firmware" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfbf586df, "tty_port_free_xmit_buf" },
	{ 0xe8e2f679, "tty_port_alloc_xmit_buf" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B5d00002028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002058sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9EA3B649E3F47EBEF6111E0");
