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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7ea19302, "put_device" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xfaab9bd1, "v4l2_ctrl_add_handler" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xf6afd406, "v4l2_spi_new_subdev" },
	{ 0xfc563763, "spi_register_controller" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0xdda5f243, "v4l2_ctrl_g_ctrl" },
	{ 0xfe1df5a9, "v4l2_ctrl_find" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x8271648f, "spi_finalize_current_message" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x34b989b3, "spi_unregister_controller" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1DF7p2500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD300d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9C737F3513B4BA8BA9CAF96");
