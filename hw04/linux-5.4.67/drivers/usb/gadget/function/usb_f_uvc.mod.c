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
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xe7a4f538, "usb_function_deactivate" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a7ba3f3, "usb_ep_autoconfig_ss" },
	{ 0x7a43b97e, "usb_gstrings_attach" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x5f3658ce, "v4l2_event_queue" },
	{ 0xbdaa62ae, "vb2_mmap" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xda49bfd, "config_item_put" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xbf67afe6, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x2502d57f, "usb_function_activate" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7ae8523d, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5d3db934, "vb2_qbuf" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0xe3a53f4c, "sort" },
	{ 0x79ac7aa0, "vb2_querybuf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0x9062426e, "usb_composite_setup_continue" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xaa23fd19, "vb2_streamon" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x881363e, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2012b80b, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0x95c1ee85, "vb2_poll" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x8d032dc2, "config_group_find_item" },
	{ 0x9bbeb8c1, "vb2_streamoff" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x69f2e717, "v4l2_fh_exit" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "libcomposite,videodev,udc-core,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc");


MODULE_INFO(srcversion, "80D8855EFEDE40EBED73213");
