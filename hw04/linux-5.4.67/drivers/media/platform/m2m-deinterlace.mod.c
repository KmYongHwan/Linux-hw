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
	{ 0xa3024e72, "v4l2_m2m_ioctl_streamoff" },
	{ 0xa48e2d85, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xe8fefc57, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x86e4e8ef, "v4l2_m2m_ioctl_expbuf" },
	{ 0x36e64f33, "v4l2_m2m_ioctl_qbuf" },
	{ 0x4677368d, "v4l2_m2m_ioctl_querybuf" },
	{ 0x9d503b20, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x3daf24db, "v4l2_m2m_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xeab57332, "v4l2_m2m_fop_poll" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xe68b2f71, "__dma_request_channel" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0xd111ad6e, "vb2_dma_contig_memops" },
	{ 0x8aaab049, "v4l2_m2m_get_vq" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x54845cf2, "v4l2_m2m_ctx_init" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaba5315c, "v4l2_m2m_buf_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x96b44e4f, "v4l2_m2m_ctx_release" },
	{ 0x69f2e717, "v4l2_fh_exit" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3dda513b, "v4l2_m2m_streamon" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0xd9e3cd5b, "v4l2_m2m_next_buf" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xf27a8197, "v4l2_m2m_buf_remove" },
	{ 0xbc57cf9f, "v4l2_m2m_job_finish" },
	{ 0x318de333, "dma_release_channel" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common");


MODULE_INFO(srcversion, "E951E0115938853FA9296B1");
