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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x77e0c6c2, "mc13xxx_irq_request" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x1ebd37ce, "mc13xxx_irq_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae80939b, "mc13xxx_reg_read" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xe0cd3249, "mc13xxx_reg_write" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xd5c6d5f0, "mc13xxx_irq_free" },
	{ 0xa1b26689, "mc13xxx_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x39319dd7, "mc13xxx_irq_unmask" },
	{ 0x8db9b52b, "mc13xxx_irq_mask" },
	{ 0x70eb7a7e, "mc13xxx_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("platform:mc13783-rtc");
MODULE_ALIAS("platform:mc13892-rtc");
MODULE_ALIAS("platform:mc34708-rtc");

MODULE_INFO(srcversion, "90B6B9FFBEC270CA9972F13");
