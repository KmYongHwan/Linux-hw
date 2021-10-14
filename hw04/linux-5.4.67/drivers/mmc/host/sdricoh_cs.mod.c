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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbC3901202pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbACE80909pc*pd*");

MODULE_INFO(srcversion, "014806DD60080BEA5967047");
