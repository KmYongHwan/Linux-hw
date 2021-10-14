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
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x85bd1608, "__request_region" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x4d8323d2, "do_SAK" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0xf035ff48, "tty_port_lower_dtr_rts" },
	{ 0x1d2c1173, "tty_port_tty_set" },
	{ 0x26d6836d, "tty_port_close_end" },
	{ 0xef6f5e7c, "tty_port_close_start" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xba312d7b, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x4dd981f, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001393d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001141sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001181sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001142sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001120sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8AB6B50BA5FC99F2C00EC5");
