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
	{ 0x5bb544ab, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xd846aad2, "videobuf_mmap_mapper" },
	{ 0xb7adae2a, "v4l2_i2c_new_subdev" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x201e46be, "videobuf_queue_vmalloc_init" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xcfa8251d, "usb_reset_configuration" },
	{ 0x83ee711c, "videobuf_streamon" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd41256ef, "videobuf_iolock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa71ec28a, "videobuf_qbuf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0xe0e5f014, "v4l2_event_pending" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x823f09c9, "videobuf_querybuf" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x610fdfde, "videobuf_read_stream" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5cd1e8b, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x95e5ea8b, "videobuf_to_vmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x48101fd5, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x4c35809d, "videobuf_reqbufs" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0xfaab9bd1, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x69f2e717, "v4l2_fh_exit" },
	{ 0x4fc951d4, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,rc-core,videobuf-vmalloc");

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2AAF26BE11D22168C3E8A56");
