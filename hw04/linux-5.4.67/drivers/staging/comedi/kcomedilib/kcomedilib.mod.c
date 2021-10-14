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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x53b954a2, "up_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x668b19a1, "down_read" },
	{ 0xf9dfb76d, "comedi_check_chanlist" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0b656c, "comedi_dev_get_from_minor" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x79a9fcbf, "comedi_dev_put" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "936D5CA931B537548992A9F");
