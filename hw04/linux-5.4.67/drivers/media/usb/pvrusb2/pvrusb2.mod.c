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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xac14880c, "dvb_module_probe" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0xb7adae2a, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dc07550, "v4l2_s_ctrl" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x785dd9f2, "device_register" },
	{ 0x299bfb12, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x548bc933, "class_unregister" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4c290ae9, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf2f8507a, "usb_urb_ep_type_check" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xacf1c9a7, "dvb_module_release" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7ea19302, "put_device" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x96848186, "scnprintf" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0xf4d81106, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xede283d, "release_firmware" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0x69f2e717, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "dvb-core,videodev,tveeprom,cx2341x");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CD89329035E1258F49F34E3");
