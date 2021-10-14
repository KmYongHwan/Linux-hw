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
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40748904, "cdev_init" },
	{ 0xa94a1a46, "devm_fpga_region_create" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe4b9d1cd, "fpga_region_unregister" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0xf720a60b, "module_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x81a6be66, "fpga_region_register" },
	{ 0x7ea19302, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x963cf8c8, "get_device" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "fpga-region");


MODULE_INFO(srcversion, "7E57407C8A12714ACCA2931");
