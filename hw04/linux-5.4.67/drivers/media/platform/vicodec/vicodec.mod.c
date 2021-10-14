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
	{ 0xa48e2d85, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xe8fefc57, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x6260e21e, "v4l2_m2m_buf_copy_metadata" },
	{ 0x7d8a7ddf, "v4l2_m2m_register_media_controller" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x339e6214, "v4l2_event_queue_fh" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x54845cf2, "v4l2_m2m_ctx_init" },
	{ 0xff8c7203, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xab851356, "vb2_request_validate" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3daf24db, "v4l2_m2m_fop_mmap" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x601d0f14, "vb2_request_object_is_buffer" },
	{ 0xbf69b34b, "v4l2_m2m_ioctl_streamon" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x9e476aa5, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x75d48418, "v4l2_m2m_last_buf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x7ae8523d, "v4l2_event_subscribe" },
	{ 0xa3024e72, "v4l2_m2m_ioctl_streamoff" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x9d503b20, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x692a9c3, "v4l2_ctrl_request_hdl_find" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0xa07a37f0, "memchr" },
	{ 0x7f2a4f02, "vb2_request_buffer_cnt" },
	{ 0xfed9d8eb, "v4l2_ctrl_request_setup" },
	{ 0xda4c81b, "media_device_cleanup" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8aaab049, "v4l2_m2m_get_vq" },
	{ 0xed94a3c6, "media_request_object_put" },
	{ 0x36e64f33, "v4l2_m2m_ioctl_qbuf" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0x93ae5f7e, "v4l2_ctrl_request_complete" },
	{ 0xeab57332, "v4l2_m2m_fop_poll" },
	{ 0x9c48df4a, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaba5315c, "v4l2_m2m_buf_queue" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xafab2cc2, "v4l2_m2m_request_queue" },
	{ 0x4677368d, "v4l2_m2m_ioctl_querybuf" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86e4e8ef, "v4l2_m2m_ioctl_expbuf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3bfe2e4e, "vb2_find_timestamp" },
	{ 0x920f06e, "v4l2_ctrl_request_hdl_ctrl_find" },
	{ 0xde725bff, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xf27a8197, "v4l2_m2m_buf_remove" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x96b44e4f, "v4l2_m2m_ctx_release" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2541f0ac, "media_device_init" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0xd9e3cd5b, "v4l2_m2m_next_buf" },
	{ 0x8a275f6b, "media_device_unregister" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xbc57cf9f, "v4l2_m2m_job_finish" },
	{ 0x69f2e717, "v4l2_fh_exit" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videodev,videobuf2-v4l2,videobuf2-common,videobuf2-vmalloc,mc");


MODULE_INFO(srcversion, "F3B25C04ED10097129DF116");
