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
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0xd1e1b0ab, "snd_vx_load_boot_image" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0xe51428cf, "snd_vx_resume" },
	{ 0x4c21315, "snd_vx_free_firmware" },
	{ 0x34e3439f, "snd_vx_dsp_boot" },
	{ 0x426e794b, "snd_vx_dsp_load" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xc5850110, "printk" },
	{ 0x729a7be5, "snd_card_free_when_closed" },
	{ 0xe5d79035, "snd_vx_suspend" },
	{ 0x371084c9, "snd_vx_check_reg_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x65523885, "snd_card_new" },
	{ 0xdb89af2b, "snd_vx_create" },
	{ 0xf1f04d23, "snd_vx_irq_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x226138b0, "snd_vx_threaded_irq_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x202e08b6, "snd_vx_setup_firmware" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "pcmcia,snd-vx-lib,snd");

MODULE_ALIAS("pcmcia:m01F1c0100f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "1A91A7C6B7CBA6E8DFCC506");
