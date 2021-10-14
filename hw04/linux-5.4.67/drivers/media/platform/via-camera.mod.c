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
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0xcd538333, "viafb_irq_enable" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb4f863e6, "viafb_pm_register" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xef62eeeb, "v4l2_i2c_new_subdev_board" },
	{ 0x52342f54, "viafb_find_i2c_adapter" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfff2dfd2, "viafb_gpio_lookup" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcaefb732, "viafb_release_dma" },
	{ 0xd1c40db7, "_vb2_fop_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x31469540, "viafb_pm_unregister" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0x30cc9311, "viafb_request_dma" },
	{ 0xf75a75c3, "v4l2_fh_is_singular" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xe1cee08, "viafb_dma_copy_out_sg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcab5dcc8, "v4l2_g_parm_cap" },
	{ 0xc092d29f, "v4l2_s_parm_cap" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3dc07550, "v4l2_s_ctrl" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb4606f8d, "viafb_irq_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,viafb,videobuf2-dma-sg,videobuf2-common");


MODULE_INFO(srcversion, "03293ECCB9165392C6E418C");
