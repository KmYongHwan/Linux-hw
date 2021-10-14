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
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xd846aad2, "videobuf_mmap_mapper" },
	{ 0xb7adae2a, "v4l2_i2c_new_subdev" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0xee692cf3, "usb_reset_endpoint" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x8709abd5, "__media_device_usb_init" },
	{ 0xc4675cc2, "cx2341x_handler_set_50hz" },
	{ 0xd4591c48, "cx2341x_handler_init" },
	{ 0x201e46be, "videobuf_queue_vmalloc_init" },
	{ 0x7409d5, "v4l2_mc_create_media_graph" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x83ee711c, "videobuf_streamon" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xd41256ef, "videobuf_iolock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x282de919, "media_entity_setup_link" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x3dc07550, "v4l2_s_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa71ec28a, "videobuf_qbuf" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xe0e5f014, "v4l2_event_pending" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x823f09c9, "videobuf_querybuf" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x610fdfde, "videobuf_read_stream" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xda4c81b, "media_device_cleanup" },
	{ 0x6b2b7841, "media_device_register_entity" },
	{ 0x1f1b30eb, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xc1f4f659, "cx2341x_handler_setup" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5cd1e8b, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x95e5ea8b, "videobuf_to_vmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x48101fd5, "videobuf_dqbuf" },
	{ 0x25ed4e21, "videobuf_queue_is_busy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xde725bff, "__media_device_register" },
	{ 0x51a432, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x4c35809d, "videobuf_reqbufs" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0xfaab9bd1, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x489032b3, "v4l2_ctrl_radio_filter" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2d8f193c, "videobuf_read_stop" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x8a275f6b, "media_device_unregister" },
	{ 0xede283d, "release_firmware" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x49909fcf, "videobuf_poll_stream" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x69f2e717, "v4l2_fh_exit" },
	{ 0x4fc951d4, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,i2c-mux,tveeprom,mc,cx2341x,videobuf-vmalloc,rc-core");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E50A27CC109D09817686B0");
