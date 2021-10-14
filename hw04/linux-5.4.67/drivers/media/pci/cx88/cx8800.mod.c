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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x24262626, "cx88_newstation" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xb7adae2a, "v4l2_i2c_new_subdev" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xde524a62, "cx88_sram_channel_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x104dd74e, "cx88_sram_channel_dump" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x423c8c00, "cx88_set_tvaudio" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x5d95a6f9, "cx88_set_stereo" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0xeabbf4dd, "cx88_risc_buffer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x3ebc3988, "cx88_ir_start" },
	{ 0xfe1df5a9, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0xf76273dd, "cx88_set_tvnorm" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x4994257d, "cx88_ir_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdee72303, "cx88_get_stereo" },
	{ 0x4fdf30c3, "cx88_core_get" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x27927129, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x904b8696, "cx88_audio_thread" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x593cdcaa, "cx88_core_put" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x27024d64, "cx88_vdev_init" },
	{ 0x9c9b7aa9, "cx88_shutdown" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x23c87aed, "cx88_set_scale" },
	{ 0xef62eeeb, "v4l2_i2c_new_subdev_board" },
	{ 0xfaab9bd1, "v4l2_ctrl_add_handler" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x293e45e0, "cx88_wakeup" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0x2100e907, "cx88_reset" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,cx88xx,videobuf2-common,videobuf2-dma-sg");

MODULE_ALIAS("pci:v000014F1d00008800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7564C5CFF128A8A982006BF");
