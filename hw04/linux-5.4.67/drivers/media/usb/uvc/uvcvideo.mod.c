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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x339e6214, "v4l2_event_queue_fh" },
	{ 0x754d539c, "strlen" },
	{ 0xbdaa62ae, "vb2_mmap" },
	{ 0xfdefdbe3, "usb_debug_root" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x1e7321c8, "vb2_create_bufs" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x3d61149f, "usb_enable_autosuspend" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x5ada0011, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x7ae8523d, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x31e0547e, "usb_poison_urb" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5d3db934, "vb2_qbuf" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x79ac7aa0, "vb2_querybuf" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xda4c81b, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0xaa23fd19, "vb2_streamon" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x45ceb65d, "vb2_expbuf" },
	{ 0xff76d558, "input_register_device" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x26010d8e, "v4l2_device_register_subdev" },
	{ 0x8c59cc8d, "media_create_pad_link" },
	{ 0x881363e, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x8d14b8b, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xe31b2c85, "v4l2_subdev_init" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0xde725bff, "__media_device_register" },
	{ 0x2012b80b, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x5405c41d, "usb_match_one_id" },
	{ 0x96848186, "scnprintf" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x95c1ee85, "vb2_poll" },
	{ 0x2541f0ac, "media_device_init" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x879026c0, "usb_get_current_frame_number" },
	{ 0x30be69e8, "v4l2_format_info" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x9bbeb8c1, "vb2_streamoff" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8a275f6b, "media_device_unregister" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x90cb6031, "usb_put_intf" },
	{ 0x69f2e717, "v4l2_fh_exit" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,mc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "B1A7C9FD663C3F0B47C280D");
