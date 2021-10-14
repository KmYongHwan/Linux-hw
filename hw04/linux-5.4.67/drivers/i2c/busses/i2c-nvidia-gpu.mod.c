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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0xfe94e94a, "pcim_iomap" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc0Csc80i*");

MODULE_INFO(srcversion, "B1B480FAA3D3FD0FB31601B");
