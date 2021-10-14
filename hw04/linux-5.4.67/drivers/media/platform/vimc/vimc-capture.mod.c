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
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xf4c2a183, "vimc_link_validate" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf5504942, "media_pipeline_start" },
	{ 0xc88e53e3, "media_pipeline_stop" },
	{ 0xfa65c694, "vimc_streamer_s_stream" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xaffe89b5, "vimc_pads_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4db77591, "component_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcfe2c150, "vimc_pix_map_by_index" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xf541e79b, "vimc_pix_map_by_code" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f919ddf, "vimc_pix_map_by_pixelformat" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x2ceef246, "component_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,vimc,videobuf2-common,mc,videobuf2-vmalloc");

MODULE_ALIAS("platform:vimc-capture");

MODULE_INFO(srcversion, "31DF6D22812B6D90D7C9452");
