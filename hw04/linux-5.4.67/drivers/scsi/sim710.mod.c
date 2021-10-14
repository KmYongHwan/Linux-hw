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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0x5a921311, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x349cba85, "strchr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3d9cece0, "NCR_700_intr" },
	{ 0x11251ae3, "NCR_700_detect" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x85bd1608, "__request_region" },
	{ 0xc5850110, "printk" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x1adfc267, "NCR_700_release" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "53c700");

MODULE_ALIAS("eisa:sCPQ4410*");
MODULE_ALIAS("eisa:sCPQ4411*");
MODULE_ALIAS("eisa:sHWP0C80*");

MODULE_INFO(srcversion, "52D6F6B065D8C999E0B1928");
