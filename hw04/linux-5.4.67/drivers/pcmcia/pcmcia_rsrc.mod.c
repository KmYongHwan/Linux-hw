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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc5e74216, "release_resource" },
	{ 0xa2a11b92, "pcmcia_socket_class" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ed34c9d, "pci_bus_alloc_resource" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0xd68c5a1f, "adjust_resource" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xbc3b6516, "class_interface_register" },
	{ 0xd98f8549, "class_interface_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x638e660d, "pci_find_parent_resource" },
	{ 0x13110126, "request_resource" },
};

MODULE_INFO(depends, "pcmcia_core");


MODULE_INFO(srcversion, "0F75ECAC54DB84D6EDC085C");
