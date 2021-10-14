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
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x2cd9f628, "rtc_nvmem_register" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E2A8CA0967EC4EA850220B2");
