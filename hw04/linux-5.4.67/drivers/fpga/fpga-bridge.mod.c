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
	{ 0x4de8d7ee, "class_find_device" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7cfd592b, "devres_alloc_node" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xffb7c514, "ida_free" },
	{ 0xb6f7270a, "device_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf720a60b, "module_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ea19302, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5680b13c, "devres_add" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xbd64d721, "device_match_of_node" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x66414bc7, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0D659871D9CBBA6AE62EA05");
