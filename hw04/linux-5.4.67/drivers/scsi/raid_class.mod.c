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
	{ 0x80868ed7, "transport_class_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfea37664, "attribute_container_classdev_to_container" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xf0b30789, "attribute_container_unregister" },
	{ 0x4beaf2ec, "attribute_container_register" },
	{ 0xb6f7270a, "device_add" },
	{ 0xda6ec6cc, "transport_class_unregister" },
	{ 0x5cd7197, "attribute_container_find_class_device" },
	{ 0x7ea19302, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x963cf8c8, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xcc18e79c, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6EDEED1D99649BFAD4562FE");
