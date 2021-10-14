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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x59dec90b, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x44f500d, "tty_standard_install" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6ff732c5, "tty_port_tty_hangup" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001931d0000000Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "28C828D12EA63D248C58DF0");
