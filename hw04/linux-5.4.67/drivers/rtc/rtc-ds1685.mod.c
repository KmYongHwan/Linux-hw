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
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6971447a, "rtc_month_days" },
	{ 0x77358855, "iomem_resource" },
	{ 0x84102e84, "rtc_add_group" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc4142837, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2cd9f628, "rtc_nvmem_register" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81990A761BB6D2CC03C23BD");
