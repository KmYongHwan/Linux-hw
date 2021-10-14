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
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x29361773, "complete" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xff9513b5, "input_mt_report_pointer_emulation" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("acpi*:ATML0000:*");
MODULE_ALIAS("acpi*:ATML0001:*");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "E6BAE1E69190FF0000A2856");
