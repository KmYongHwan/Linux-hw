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
	{ 0x9123cefc, "em28xx_read_reg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf3b21588, "media_device_unregister_entity" },
	{ 0xb7adae2a, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x51662b53, "em28xx_write_regs" },
	{ 0x87c645f4, "v4l2_ctrl_notify" },
	{ 0xc834ae00, "em28xx_setup_xc3028" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x7409d5, "v4l2_mc_create_media_graph" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xaed05f15, "em28xx_init_usb_xfer" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8156003, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x282de919, "media_entity_setup_link" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x76ec27ca, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x17a0a991, "em28xx_uninit_usb_xfer" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x6b2b7841, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfe1df5a9, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x93c0cb1b, "em28xx_audio_setup" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41d0e8e5, "v4l2_i2c_subdev_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xd44fc557, "em28xx_set_mode" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x8b266301, "em28xx_stop_urbs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c3163f1, "em28xx_write_reg" },
	{ 0x55eac8d0, "em28xx_audio_analog_set" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x7160f4b3, "em28xx_init_camera" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "68717C4A9D9A1C081FF8F20");
