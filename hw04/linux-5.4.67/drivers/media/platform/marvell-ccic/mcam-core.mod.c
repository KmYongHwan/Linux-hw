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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1c40db7, "_vb2_fop_release" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x51ae8e57, "v4l2_async_notifier_cleanup" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xf83aa47b, "v4l2_async_notifier_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x10a7625f, "v4l2_async_notifier_add_subdev" },
	{ 0xdd64e639, "strscpy" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xe88346b7, "devm_clk_register" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x3dc07550, "v4l2_s_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0xfcb05d8d, "v4l2_async_notifier_register" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0xf75a75c3, "v4l2_fh_is_singular" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcab5dcc8, "v4l2_g_parm_cap" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0xd111ad6e, "vb2_dma_contig_memops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xe05883d9, "v4l2_async_notifier_unregister" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xc092d29f, "v4l2_s_parm_cap" },
	{ 0xe484e35f, "ioread32" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common,videobuf2-dma-contig,videobuf2-dma-sg");


MODULE_INFO(srcversion, "322E0BB8FB465C597034E0E");
