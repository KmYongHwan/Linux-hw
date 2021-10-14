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
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40748904, "cdev_init" },
	{ 0xf44a972b, "driver_register" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xa071f2c6, "single_release" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x17b65eed, "input_ff_event" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xef5593c0, "power_supply_powers" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x751ddf63, "bus_rescan_devices" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2864d614, "fasync_helper" },
	{ 0x5a921311, "strncmp" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x752832c, "noop_llseek" },
	{ 0x88e96942, "device_create" },
	{ 0xb6f7270a, "device_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x605e35f4, "bus_for_each_dev" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3048d52f, "device_reprobe" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x176d68b6, "bus_for_each_drv" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0xabb03ead, "driver_attach" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66414bc7, "__class_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "936CA09BEB6EB510AAB78D9");
