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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb0fb8e80, "usb_sg_wait" },
	{ 0x61b43c01, "usb_sg_init" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xfe9b3b60, "input_mt_get_slot_by_key" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcde19722, "vb2_wait_for_all_buffers" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5f0e284b, "input_allocate_polled_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47a83910, "input_free_polled_device" },
	{ 0xc042b99a, "input_unregister_polled_device" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-sg,input-polldev");

MODULE_ALIAS("usb:v045Ep0775d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8B9CE3F5287708C3AFD71A2");
