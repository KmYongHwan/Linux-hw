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
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf44a972b, "driver_register" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xf1e377dd, "pcmcia_put_socket" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa2a11b92, "pcmcia_socket_class" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x751ddf63, "bus_rescan_devices" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf3b67072, "pcmcia_parse_uevents" },
	{ 0x785dd9f2, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbc3b6516, "class_interface_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd98f8549, "class_interface_unregister" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xf720a60b, "module_put" },
	{ 0x9ab7229c, "pccard_register_pcmcia" },
	{ 0xda872864, "security_locked_down" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x605e35f4, "bus_for_each_dev" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfa52aa89, "driver_create_file" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x963cf8c8, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x71deb539, "request_firmware" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xabb03ead, "driver_attach" },
	{ 0xc35a23d5, "driver_remove_file" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xede283d, "release_firmware" },
	{ 0x14877083, "pcmcia_get_socket" },
	{ 0x13110126, "request_resource" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "pcmcia_core");


MODULE_INFO(srcversion, "8CCAD36E06962432E12D105");
