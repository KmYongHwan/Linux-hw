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
	{ 0x76ec0f1f, "tpm_pm_resume" },
	{ 0xda4295e1, "tpm_pm_suspend" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xb37c09f0, "tpm_chip_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x844b5e2e, "tpmm_chip_alloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x11858bc4, "tpm_chip_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdcc80fb9, "__i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tpm_i2c_infineon");
MODULE_ALIAS("i2c:slb9635tt");
MODULE_ALIAS("i2c:slb9645tt");

MODULE_INFO(srcversion, "DEB82A3C653060852D31DF9");
