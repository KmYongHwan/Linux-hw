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
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x98d0beaa, "media_device_usb_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67db8e6a, "__media_pipeline_start" },
	{ 0xe282b7f9, "media_device_unregister_entity_notify" },
	{ 0xd1c40db7, "_vb2_fop_release" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0xf3b21588, "media_device_unregister_entity" },
	{ 0xb7adae2a, "v4l2_i2c_new_subdev" },
	{ 0x329de697, "dvb_create_media_graph" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x37c802cf, "dvb_frontend_suspend" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x4ba6808b, "dvb_frontend_resume" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x7409d5, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x81752fc3, "v4l_disable_media_source" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xda7cc97f, "media_device_delete" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x282de919, "media_entity_setup_link" },
	{ 0xd5a74aa7, "media_get_pad_index" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x21df32c7, "tveeprom_read" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3b3e4156, "v4l_enable_media_source" },
	{ 0x6b2b7841, "media_device_register_entity" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x4353e4ca, "media_device_register_entity_notify" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67f3a050, "__media_pipeline_stop" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c59cc8d, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0xde725bff, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x326030c7, "__media_entity_setup_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x8f226906, "ir_raw_event_store" },
	{ 0x83416353, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,rc-core,dvb-core,tveeprom,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5F198037FCC48918D2DD139");
