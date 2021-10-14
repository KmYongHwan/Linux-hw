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
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0x350dca55, "v4l2_event_subdev_unsubscribe" },
	{ 0x95de87f3, "v4l2_subdev_link_validate_default" },
	{ 0x82d7b2fd, "v4l2_subdev_link_validate" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf5504942, "media_pipeline_start" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xe3c3dab9, "v4l2_async_notifier_add_fwnode_remote_subdev" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x3fdf0f67, "v4l2_fwnode_endpoint_parse" },
	{ 0xfcb05d8d, "v4l2_async_notifier_register" },
	{ 0x6c80cc46, "fwnode_graph_get_endpoint_by_id" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0xf83aa47b, "v4l2_async_notifier_init" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0x26010d8e, "v4l2_device_register_subdev" },
	{ 0xe31b2c85, "v4l2_subdev_init" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xde725bff, "__media_device_register" },
	{ 0x2541f0ac, "media_device_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5f3658ce, "v4l2_event_queue" },
	{ 0xda4c81b, "media_device_cleanup" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x51ae8e57, "v4l2_async_notifier_cleanup" },
	{ 0xe05883d9, "v4l2_async_notifier_unregister" },
	{ 0x8a275f6b, "media_device_unregister" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xc88e53e3, "media_pipeline_stop" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x7c25e26e, "v4l2_querymenu" },
	{ 0xdda5f243, "v4l2_ctrl_g_ctrl" },
	{ 0xfe1df5a9, "v4l2_ctrl_find" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0xc8a4a67d, "media_entity_remote_pad" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xab5b6873, "v4l2_device_register_subdev_nodes" },
	{ 0x8c59cc8d, "media_create_pad_link" },
	{ 0x7ae8523d, "v4l2_event_subscribe" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xdd64e639, "strscpy" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,v4l2-fwnode,videobuf2-dma-sg,videobuf2-common");

MODULE_ALIAS("pci:v00008086d00009D32sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C378AF92E7EDEDB82FA93FC");
