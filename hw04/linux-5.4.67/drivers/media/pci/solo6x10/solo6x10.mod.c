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
	{ 0x5f3658ce, "v4l2_event_queue" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x60ad394d, "video_device_release" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xbf86e9a2, "video_device_alloc" },
	{ 0x785dd9f2, "device_register" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x7ae8523d, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0xf7584a9c, "find_font" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x65523885, "snd_card_new" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x4d554f05, "device_create_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xd111ad6e, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xa637b975, "dma_ops" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-common,videobuf2-dma-contig,videobuf2-dma-sg");

MODULE_ALIAS("pci:v00009413d00006010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009413d00006110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A3C0F6CDC8B56A10F0646CD");
