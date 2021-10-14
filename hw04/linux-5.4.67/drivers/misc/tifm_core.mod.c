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
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf44a972b, "driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0x548bc933, "class_unregister" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xb6f7270a, "device_add" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x963cf8c8, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa637b975, "dma_ops" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "977337D3816A6D0F99D6A4F");
