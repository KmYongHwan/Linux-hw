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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x60ad394d, "video_device_release" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0xbf86e9a2, "video_device_alloc" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0xd111ad6e, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,videobuf2-vmalloc,videobuf2-common,snd,videobuf2-dma-contig,videobuf2-dma-sg");

MODULE_ALIAS("pci:v00001797d00006864sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001797d00006865sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001797d00006868sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001797d00006869sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "415A8661729907B7DD56C67");
