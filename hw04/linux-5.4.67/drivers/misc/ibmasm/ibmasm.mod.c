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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x11b04550, "serial8250_register_8250_port" },
	{ 0x7545c1c3, "get_tree_single" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7b26f7c9, "generic_delete_inode" },
	{ 0x41b0b9cc, "dput" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xe16a6075, "d_add" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x64042456, "simple_dir_operations" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x638c7869, "current_time" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x674e30c0, "simple_statfs" },
	{ 0x3b2d0364, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2947182d, "new_inode" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x48b84203, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d0000010Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2C940E6D24D10F45BD038F9");
