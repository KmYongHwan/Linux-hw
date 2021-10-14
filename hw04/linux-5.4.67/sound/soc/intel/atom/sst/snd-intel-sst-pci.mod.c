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
	{ 0xbf9b2b34, "sst_context_init" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xfe94e94a, "pcim_iomap" },
	{ 0x64eab6b9, "sst_context_cleanup" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x70696cb5, "sst_alloc_drv_context" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x7de0affe, "intel_sst_pm" },
	{ 0x87c34f23, "sst_configure_runtime_pm" },
	{ 0x709cd25f, "relocate_imr_addr_mrfld" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "snd-intel-sst-core");


MODULE_INFO(srcversion, "F16587AB81DA2F95A75068F");
